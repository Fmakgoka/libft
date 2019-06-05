#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char     ft_toupper(char c)
 {
      if (c >= 'a' && c <= 'z')      {
          return (c - 32);
      }
      else
      {
          return (c);
      }
  }

char	*ft_strmap(char const *s, char (*f)(char));

int main(void)
{
	char *name = "justine";
	puts(ft_strmap(name, ft_toupper));
	return (0);
}

char	*ft_strmap(char const *s, char (*f)(char))
{
	size_t	i;
	size_t	s_len;
	char	*f_s;

	f_s = NULL;
	if (s)
	{
		i = 0;
		s_len = strlen(s);
		if (!(f_s = (char*)malloc((1 + s_len) * sizeof(char))))
			return (NULL);
		while (i < s_len)
		{
			f_s[i] = f(s[i]);
			i++;
		}
		f_s[i] = '\0';
	}
	return (f_s);
}
