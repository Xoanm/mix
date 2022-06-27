#include <stdlib.h>
#include <string.h>
#include <stdio.h>

size_t ft_strlcpy(char *dest, const char *src, size_t n)
{
    size_t len;
    len = strlen(src);

    if (len < n)
        memcpy(dest, src, len + 1);
    else {
        memcpy(dest, src, n - 1);
        dest[n - 1] = '\0';
    }

    return len;
}

int main(void)
{
  char dest[] = "cadenadestino";
  char src[] = "yestaeslacadenadeorigen";
  printf("%lu\n", ft_strlcpy(dest, src, 14));
  printf("%d\n", &src[0]);
  printf("%d\n", &dest[13]);
  return (0);
}