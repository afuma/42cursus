/* PROTOTYPE DES FONCTIONS DE LA LIBC */


// ATTENTION: prototypes des fonctions a revoir au cas par cas.
// (quand saut de ligne dans la partie suivante uniquement)

// fonctions ne necessitant pas de fonctions externes

int ft_isalpha(int c);
int ft_isdigit(int c);
int ft_isalnum(int c);
int ft_isascii(int c);
int ft_isprint(int c);

int ft_strlen(int c);
int ft_memset(int c);
int ft_bzero(int c);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
size_t strlcpy(char *dest, const char *src , size_t size);
size_t strlcat(char *dest, const char *src , size_t size);
int toupper(int c);
int tolower(int c);
char *strchr(const char *s, int c);
char *strrchr(const char *s, int c);
int strncmp(const char *s1, const char *s2, size_t n);
void *memchr(const void *s, int c, size_t n);
int memcmp(const void *s1, const void *s2, size_t n);
char *strnstr(const char *big, const char *little, size_t len);
int atoi(const char *str);

// fonctions necessitant la fonction externe malloc()

int ft_calloc(int c);
int ft_strdup(int c);
