/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split_OK_26.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fyang <fyang@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/25 00:16:22 by fyang             #+#    #+#             */
/*   Updated: 2024/06/25 17:52:46 by fyang            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_wordcounter(const char *s, char c)
{
	int	i;
	int	word_count;

	i = 0;
	word_count = 0;
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			word_count++;
			while (s[i] != '\0' && s[i] != c)
				i++;
		}
		else
			i++;
	}
	return (word_count);
}

static char	*ft_extractword(const char *s, char c)
{
	int		i;
	char	*word;
	
	i = 0;
	while (s[i] != '\0' && s[i] != c)
		i++;
	word = (char *)malloc(sizeof(char) * (i + 1));
	if (word == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0' && s[i] != c)
	{
		word[i] = s[i];
		i++;
	}
	word[i] = '\0';
	return (word);
}

static void	ft_free_words(char **words)
{
	int	i;

	if (words == NULL)
		return;
	i = 0;
	while (words[i] != NULL)
	{
		free(words[i]);
		i++;
	}
	free(words);
}

char	**ft_split(const char *s, char c)
{
	int i;
	int j;
	int num_words;
	char **words;

	i = 0;
	j = 0;
	num_words = ft_wordcounter(s, c);
	words = (char **)malloc(sizeof(char *) * (num_words + 1));
	if (words == NULL || s == NULL)
	{
		ft_free_words(words);
		return (NULL);
	}
	while (s[i] != '\0')
	{
		if (s[i] != c)
		{
			words[j] = ft_extractword(&s[i], c);
			if (words[j] == NULL) 
			{
				ft_free_words(words);
				return (NULL);
			}
			while (s[i] != '\0' && s[i] != c)
				i++;
			j++;
		}
		else 
			i++;
		}
	words[j] = NULL;
	return (words);  
}
