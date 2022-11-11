// voir pour le header (telecharger extension VScode, demander a clement)
//man on this site: https://linux.die.net/man/3/toupper

/* FONCTIONS DE LA LIBC */

#include <stddef.h>

int ft_isalpha(int c)
{
    return (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z');
}

int ft_isdigit(int c)
{
    return (c >= '0' && c <= '9');
}

//checks for an alphanumeric character;
int ft_isalnum(int c)
{
    return (ft_isalpha(c) || ft_isdigit(c));
}

int ft_isascii(int c)
{
    /* man: checks whether c is a 7-bit unsigned char value that  fits  into
              the ASCII character set.
    */
    return (c >= 0 && c <= 127);
}

int ft_isprint(int c)
{
    return (c >= 20 && c <= 126);
}

size_t strlen(const char *str)
{
    int i;

    i = 0;
    while(str[i] != '\0')
    {
        i++;
    }
    i++; // si on compte le caractere null

    return i;
}

void *memset(void *s, int c, size_t n)
{
    void *ptr;
    int i;

    ptr = s;
    i = 0;
    while (i <= n)
    {
        *(int) s = c;
        s++;
        i++;
    }

    return (ptr);
}

void bzero(void *s, size_t n)
{
    int i;

    i = 0;
    while(i <= n)
    {
        *s = '\0';
        s++;
    }
}

void *ft_memcpy(void *dest, const void *src, size_t n)
{
    void *s_dest;
    unsigned char *s;
    unsigned char *d;
    size_t i;

    s_dest = dest;
    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    i = 0;
    // je crois qu'il n'y a pas de condition sur le \0
    // puisque c'est n bytes (et pas NULL-terminated dans la description)
    while(*s != '\0' && i <= n)
    {
        *d = *s;
        s++;
        d++;
        i++;
    }

    return ((void *) s_dest);
}

void *ft_memmove(void *dest, const void *src, size_t n)
{
    // ----- Help ------


    /*ATTENTION: comment savoir si le pointeur tmp n'est pas elle, en overlap sur la source
    1- une possibilite serais de comparer les adresse des pointeurs et de leurs ajouter n bytes,
    ce qui serais une solution tres acceptable.
    2- la seconde possibilite serais de voir si les valeurs des pointeurs ont une valeur qui serait celle
    de la chaine src ou dest. ce qui serais assez laborieux niveau memoire
    */

    // on copie src dans tmp, puis on copie tmp dans dest
    void *s_dest;
    unsigned char *s;
    unsigned char *d;
    unsigned char *tmp;
    unsigned char *s_tmp;
    size_t i;

    //tmp = src + sizeof(src) + 2
    s_tmp = tmp;
    s_dest = dest;
    s = (unsigned char *) src;
    d = (unsigned char *) dest;
    i = 0;
    // de meme qu'en haut pour le \0
    while(*s != '\0' && i <= n)
    {
        *tmp = *s;
        s++;
        tmp++;
        i++;
    }
    i = 0;
    while(*s_tmp != '\0' && i <= n)
    {
        *d = *s_tmp;
        s_tmp++;
        d++;
        i++;
    }

    return ((void *) s_dest);
}

size_t strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    if (*src == NULL || *src == '\0')
    {
        return (0);
    }
    if (size <= 0)
    {
        return (strlen(src));
    }
    while(*src != '\0' && i <= size - 1)
    {
        *dst = *src;
        src++;
        dst++;
        i++;
    }
    *dst = '\0';

    return (i);
}

size_t strlcat(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    if (*src == NULL || *src == '\0')
    {
        return (0);
    }
    if (size <= 0)
    {
        return (strlen(src));
    }
    /*if (*dst != NULL && *(dst + 1) == NULL)
    {
        *dst = '\0';
    }*/
    while(*src != '\0' && i <= size - 1)
    {
        src++;
        i++;
    }
    if(i == size)
    {
        return (size);
    }
    while(*dst != '\0' && i <= size - 1)
    {
        *dst = *src;
        src++;
        dst++;
        i++;
    }
    *dst = '\0';

    return (i);
}

int toupper(int c)
{
    if (c >= 97 && c <= 122)
    {
        c -= 32; // 26 lettres + 6 caracteres speciaux
    }
    return (c);
}

int tolower(int c)
{
    if (c >= 65 && c <= 90)
    {
        c += 32; // 26 lettres + 6 caracteres speciaux
    }
    return (c);
}

char *strchr(const char *s, int c)
{
    // si il y a une erreur de cast entre la string (const char *s) et la valeur de retour qui est un char
    // alors creer une variable (char *str; *str = *s;) puis travailler avec str
    int i;

    i = 0;
    while (s[i] != '\0')
    {
        if (s[i] == c)
        {
            return (s);
        }
        i++;
    }
    if (s[i] == '\0' && c == '\0')
    {
        *s = *(s + i);
        return (s);
    }
    return (NULL);
}

char *strrchr(const char *s, int c)
{
    int len_str;
    int i;

    i = 0;
    len_str = strlen(s) + 1;
    *s = *(s + len_str);
    while (i < len_str)
    {
        if (s[len_str - i] == c)
        {
            return (s);
        }
        s--;
        i++;
    }
    return (NULL);
}

int strncmp(const char *s1, const char *s2, size_t n)
{
    int i;

    i = 0;
    while(s1[i] != '\0' && s2[i] != '\0' && i <= n - 1)
    {
        if (s1[i] != s2[i])
        {
            return (s1[i] - s2[i]);
        }
        i++;
    }
    return (s1[i] - s2[i]);
}

void *memchr(const void *s, int c, size_t n)
{
    unsigned char *str;
    unsigned char letter;
    int i;

    str = (unsigned char *) s;
    letter = (unsigned char) c;
    i = 0;
    while (i < n)
    {
        if (*str == letter)
        {
            return (str);
        }
        i++;
    }
    return (NULL);
}

int memcmp(const void *s1, const void *s2, size_t n)
{
    unsigned char *str1;
    unsigned char *str2;
    int i;

    str1 = (unsigned char *) s1;
    str2 = (unsigned char *) s2;

    i = 0;
    while(str1[i] != '\0' && str2[i] != '\0' && i <= n - 1)
    {
        if (str1[i] != str2[i])
        {
            return (str1[i] - str2[i]);
        }
        i++;
    }
    return (str1[i] - str2[i]);
}

char *strnstr(const char *big, const char *little, size_t len)
{
    int i;

    i = 0;
    if (*little == '')
    {
        return (big);
    }
    while(*big != '\0' && i < len)
    {
        if (*little == '\0')
        {
            return (big);
        }
        big++;
        little++;
        i++;
    }
    return (NULL);
}

int atoi(const char *str)
{
   int result;
   int sign;
 
   result = 0;
   sign = 1;
   if(*str == '-' || *str == '+')
   {
       if(*str == '-')
       {
           sign *= -1;
       }
   }
   while(*str >= 48 && *str <= 57)
   {
       result = result * 10 + *str;
       str++;
   }
   return (sign * result);
}