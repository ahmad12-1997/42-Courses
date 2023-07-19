/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:15:39 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/19 17:02:28 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static char	*ft_num_strdup(char const *s, size_t n)
{
	size_t	i;
	char	*result;

	result = (char *)malloc(sizeof(char) * (n + 1));
	if (!result)
		return (0);
	i = 0;
	while (i < n)
	{
		result[i] = s[i];
		i++;
	}
	result[i] = '\0';
	return (result);
}

static int	ft_wordlen(char const *s, char c)
{
	int	wordlen;

	wordlen = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		wordlen++;
		s++;
	}
	return (wordlen);
}

static int	ft_word_counter(char const *s, char c)
{
	int	count;

	count = 0;
	if (c == 0 && *s == 0)
		return (count);
	else if (c == 0)
	{
		count = 1;
		return (count);
	}
	while (*s && *s == c)
		s++;
	while (*s)
	{
		count++;
		while (*s != c && *s)
			s++;
		while (*s == c && *s)
			s++;
	}
	return (count);
}

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	count;
	size_t	wordlen;
	size_t	i;

	if (!s || s == 0)
		return ((char **) NULL);
	count = ft_word_counter(s, c);
	result = (char **)malloc(sizeof(char *) * (count + 1));
	if (!result)
		return (NULL);
	i = 0;
	while (i < (count))
	{
		while (*s && *s == c)
			s++;
		wordlen = ft_wordlen(s, c);
		result[i] = ft_num_strdup(s, wordlen);
		s += wordlen;
		i++;
	}
	result[count] = NULL;
	return (result);
}
// int main()
// {
//     //char *str = "Hello This is Ahmad kanbari";
//    char **split = ft_split("hello!", ' ');

//     //char **split = ft_split(str,' ');
//     for (int i =0; i < 5; i++)
//     {
//         printf("%s\n",split[i]);
//     }
//     free(split);
// }
