/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frubio-i <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/06/29 17:52:10 by frubio-i          #+#    #+#             */
/*   Updated: 2024/11/25 18:33:22 by frubio-i         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t	ft_words_count(const char *s, char c)
{
	size_t	i;
	size_t	wcount;

	i = 0;
	wcount = 0;
	if (!s || !*s)
		return (0);
	if (s[0] != c)
		wcount++;
	while (s[i] != '\0')
	{
		if (s[i] == c && s[i + 1] != c && s[i + 1] != '\0')
			wcount++;
		i++;
	}
	return (wcount);
}

void	ft_free_mem(char **str)
{
	size_t	i;

	i = 0;
	while (str[i])
	{
		free(str[i]);
		i++;
	}
	free(str);
}

static size_t	ft_wlen(const char *s, char c)
{
	size_t	wlen;

	wlen = 0;
	while (*s == c)
		s++;
	while (*s != '\0' && *s != c)
	{
		s++;
		wlen++;
	}
	return (wlen);
}

static char	**ft_new_str(char **split, const char *s, size_t j, char c)
{
	size_t	i;
	size_t	wlen;

	i = 0;
	wlen = ft_wlen(s, c);
	split[j] = (char *)malloc(wlen + 1 * sizeof(char));
	if (!split[j])
	{
		free(split[j]);
		return (NULL);
	}
	while (i < wlen)
	{
		split[j][i] = s[i];
		i++;
	}
	split[j][i] = '\0';
	return (split);
}

char	**ft_split(char const *s, char c)
{
	char	**split;
	size_t	j;
	size_t	wcount;

	j = 0;
	wcount = ft_words_count(s, c);
	if (!s)
		return (NULL);
	split = (char **)malloc((wcount + 1) * sizeof(char *));
	if (!split)
		return (NULL);
	while (*s && j < wcount)
	{
		while (*s == c)
			s++;
		if (!ft_new_str(split, s, j, c))
		{
			ft_free_mem(split);
			return (NULL);
		}
		j++;
		s = s + ft_wlen(s, c);
	}
	split[wcount] = NULL;
	return (split);
}
/*
int	main(void)
{
	char const	s[] = "0+  +1 --2 3 _4 5 ,6 ..7. .!8 19";
	char		c = ' ';
	char		**split;
	int		wcount;
	char		**sptr;
	int		i;

	split = ft_split(s, c);
	wcount = ft_words_count(s, c);
	sptr = split;
	i = 1;
	printf("String dado es: %s\n", s);
	printf("El numero de palabras de la cadena es: %d\n", wcount);
	if (sptr == NULL)
		printf("Devuelve nulo");
	while (wcount > 0)
	{
		printf("La palabra %d es: %s\n", i, *sptr);
		sptr++;
		wcount--;
		i++;
	}
	ft_free_mem(split);
	return (0);
}*/
