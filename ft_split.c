#include "libft.h"
#include <stdio.h>
#include <malloc.h>

// simply gets the size of the substring
static size_t	get_substr_size(const char *s, char c)
{
	size_t	i;

	i = 0;
	while (s[i])
	{
		if (s[i] == c)
			return(i);
		i++;
	}
	return (i);
}


// Count how many ""words"" in a string, using c as delimiter
static size_t	count_words(const char *s, char c)
{
	size_t	count;
	int	ix;

	ix = 0;
	count = 0;

	/* it will basically run but as soon as it find anything different than the
	delimeter it will +1 for count and also run until find the delimeter again
	or the NULL value*/

	// run through the entire string
	while(s[ix])
	{
		// if find c start a new logical structure
		if(s[ix] != c)
		{
			// of course count 1 up, because it found a word
			count++;

			// goes through while the delimiter is not founded
			while(s[ix] != c)
			{
				ix++;
				/*i had to add this guard because it kept running even when
				passed the NULL terminator, funny enough it still works if i
				remove that shit*/
				if (!s[ix])
					return (count);
			}
		}
		ix++;
	}
	return (count);
}

/* this function goes to the next word where 'c' is the delimiter (I tried to
use strchr but was not working the way I wanted) */
static const char	*jump_word(const char *s, char c)
{
	size_t	i;
	i = 0;


	// go through the string
	while(s[i])
	{
		// if it finds 'c' start a logical structure
		if (s[i] == c)
		{
			// here i jump all 'c'
			while(s[i] == c)
				i++;

			// after the jumps through the delimiters, return the address
			return(&s[i]);
		}
		i++;
	}
	// if any delimiter is founded return the entire string
	return(s);
}

static void	free_vec(char **vec)
{
	size_t	i;

	i = 0;
	while (vec[i])
	{
		free(vec[i]);
		i++;
	}
	free(vec);
}

// takes a string and transform into a vector by using 'c' as the delimeter
char **ft_split(char const *s, char c)
{
	char	**split_str;
	size_t	i;
	size_t	size;

	if (!s || (!c && !*s))
	{
		split_str = malloc(sizeof(*split_str));
		if (!split_str)
			return (NULL);
		split_str[0] = NULL;
		return (split_str);
	}
	// the size is basically how many "words" there is in the string.
	size = count_words(s, c);

	/* initialize the vector using size (quantaty of words), those words will be
	transformed into individual strings inside the vector, I also allocate extra
	one becauseof the last element of the vector that has to be a NULL,
	multiplying all that by a char to a pointer */
	split_str = malloc((size + 1) * sizeof(*split_str));
	i = 0;

	/* if there is delimiters on the begginning this loop will jump them
	(didn't find any better way to do this)*/
	while (*s == c)
		s++;
	while (i < size)
	{
		/* I need to allocate memory to each element of the vector as well
		substr makes the allocation for me, i just need to specify the string
		itself, where to start, and how many chars to get */
		split_str[i] = ft_substr(s, 0, get_substr_size(s, c));
		if (!split_str[i])
		{
			free_vec(split_str);
			return (NULL);
		}
		// here jump for the next word
		s = jump_word(s, c);
		i++;
	}
	// the last element receive NULL
	split_str[i] = NULL;
	return (split_str);
}
