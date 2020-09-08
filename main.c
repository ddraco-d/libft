#include <stdio.h>
#include "libft.h"
#include <string.h>
#include <ctype.h>

void printArray(int arr[], int n)

{
   for (int i=0; i<n; i++)

      printf("%d ", arr[i]);
}



int main(int argc, const char * argv[])
{
	char buf[20];
	char buf1[20];
	char str[] = "asrcfa";
	char str1[] = "aasrcfb";
	size_t sz;
	size_t aba;
	
//	int n = 2;
//	int arr[n];
	
//	for (i = 0; i < 10; i++)
//	{
//		buf[i] = 'b';
//		buf1[i] = 'b';
//	}
//	buf[i] = '\0';
//	buf1[i] = '\0';
//	sz = ft_strlcat(buf, str, 15);
//	printf("%s\n%zu\n", buf, sz);
//	aba = strlcat(buf1, str, 15);
//	printf("%s\n%zu", buf1, aba);
	
	
//	sz = strlcpy(buf, str, sizeof(buf));
//	printf("%s\n%zu", buf, sz);
	
	
//	ft_memset(str,'_',12);
//	printf("%s", str);
//	memset(arr, 1, 8);
//  printf("Array after memset()\n");
//	printArray(arr, n);

//	printf("%zu", strlen(str));
	
//	ft_bzero(str, 2);
//	printf("%s", str);
	
//	char *h = memcpy(buf, NULL, 25);
//	printf("%s\n", buf);
//	char *b = ft_memcpy(buf1, NULL, 25);
//	printf("%s\n", buf1);
//	
//	char *a;
//	char *b;
//	a = memccpy(buf, str, 'a', 7);
//	b = ft_memccpy(buf1, str, 'a', 7);
//		int b = ft_memcmp(str, str1, 5);
//	int a = memcmp(str, str1, 5);

//	char *a;
//	char *b;
//	a = ft_strchr(str, 'r');
//	b = strchr(str1, 'r');
//	return 0;
	
//	char *a;
//	char *b;
//	a = ft_strrchr(str, 0);
//	b = strrchr(str1, 0);
//	return 0;
	
//	char sstr[] = "src";
//	char *a;
//	char *b;
//	a = ft_strnstr("111n345h", "n345h", 5);
//	b = strnstr("111n345h", "n345h", 5);
	
//	int a = ft_strncmp(str, str1, 3);
//	int b = strncmp(str, str1, 3);
	
//	int a = ft_atoi("+123f3");
//	int b = atoi("+123f3");
	
//	int a = ft_isalpha('[');
//	int b = isalpha('z');
//
//	return (0);
	
//	int a = ft_toupper('/');
//	int b = toupper('/');
	
//	int *a = ft_calloc(2, 0);
//	int *b = calloc(2, 0);
	
//	char *a = ft_strdup("");
//	char *b = strdup("");
//
	
//	char	strr[] = "lorem ipsum dolor sit amet";
//	char *h = ft_substr(strr, 7, 10);
	
//	char *h = ft_strjoin(str, str1);
	
//	char	set [] = "\t \n";
//	char	*s1 = "        ";
//	char	*ret = ft_strtrim(s1, set);
	
//	char	*strr = "i just want this part #############";
//	size_t	size = 20;
//
//	char	*ret = ft_substr(strr, 5, size);
	
//
//	char	*n = "99999999999999999999";
//
//		int		i1 = atoi(n);
//		int		i2 = ft_atoi(n);
	

//	char *h = ft_itoa(51);
	
//	char	*s1 = "my favorite animal is";
//	char	*s2 = "ab";
//	char	*s3 = "the nyancat";
//
//	char	*res = ft_strjoin(ft_strjoin(s1, s2), s3);
//	printf("%s", res);
	
//	char *s1 = "AAAAAAAAAAAAA";
//	size_t max = strlen(s1);
//	char *i1 = strnstr(s1, s1, max);
//	char *i2 = ft_strnstr(s1, s1, max);

//	char	*string = "      split       this for   me  !       ";
//	char	**expected = ((char*[6]){"split", "this", "for", "me", "!", NULL});
//
//	char	**result = ft_split(string, '\0');
//	int i = 0;
//	while (result[i])
//	{
//		printf("%s\n", result[i]);
//		i++;
//	}
	
//	char *s = "split\n it   ";
//
//	char **result = ft_split(s, '\n');
//	int ij;
//	ij = 0;
//		while (result[ij])
//		{
//			printf("%s\n", result[ij]);
//			ij++;
//		}
	
//	char *to_find = NULL;
//	char *strr = "Hello w";
//
////	char *rez = ft_strnstr(strr, to_find, 2);
//	char *rez1 = strnstr(strr, to_find, 2);
	
//	ft_putnbr_fd(-2147483648, 1);
	
	return 0;
}
