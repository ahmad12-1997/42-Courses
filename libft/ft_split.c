/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: akanbari <akanbari@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/08 19:15:39 by akanbari          #+#    #+#             */
/*   Updated: 2023/07/17 15:16:04 by akanbari         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_num_strdup(char const *s, size_t n)
{
    size_t i;
    char *result;

    result = (char *)malloc(sizeof(char) * (n + 1));
    if (!result)
        return (0);
    i = 0;
    while(i < n)
    {
        result[i] = s[i];
        i++;
    }
    result[i] = '\0';
    return (result);
}
int ft_wordlen(char const *s , char c)
{
    int wordlen;

    wordlen = 0;
    while(*s && *s == c)
        s++;
    while(*s && *s != c)
    {
        wordlen++;
        s++;
    }
    return (wordlen);
}
int ft_word_counter(char const *s, char c)
{
    int count;

    count = 0;
    if (c == 0 && *s == 0)
        return (count);
    else if (c == 0)
    {   
        count = 1;
        return (count);
    }
    while(*s && *s == c)
        s++;
    while (*s)
    {   
        count++;
        while(*s != c && *s)
            s++;
        while(*s == c && *s)
            s++;
    }
    return (count);
}
void ft_free(char **s, int i)
{
    while(i != 0)
    {
        free(s[i]);
    }
    free(s);
}

char **ft_split(char const *s, char c)
{   
    //pointer to array of pointers ,where each one is pointing to a string.
    char **result;
    size_t count;
    size_t wordlen;
    size_t i;

    if(!s || s == 0)
        return ((char **)NULL);
    // we will count the words in string s based on the delimeter

    count = ft_word_counter(s,c);
    //the last pointer will point to 0 or null
    //we will allocate memory for each pointer to pointer which is 8bytes
    result = (char **)malloc(sizeof(char *) * (count + 1));
    if (!result)
        return (NULL);
    i = 0;
    while (i < (count))
    {   
        while(*s && *s == c)
            s++;
        //calculate the lenght of word and coppy it to its string
        wordlen = ft_wordlen(s,c);
        if (!(result[i] = ft_num_strdup(s,wordlen)))
        {
            ft_free(result,i);
            return (NULL);
        }
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
