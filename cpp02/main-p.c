#include<unistd.h>
#include<stdio.h>
#include<fcntl.h>

int ft_strlen(char const *str)
{
    int i = 0;
    while(str[i])
        i++;
    return (i);
}

int main ()
{
    float     characters = 24;
    int     i = 0;
    FILE    *file;
    void    *text;

    file = fopen("./kk.txt", "r+");
    if (!file)
        return 1;
    while (i < characters / 2)
    {
        fprintf(file, "A\n")
        i++;
    }
    printf("AHORA VAMOS A IMPRIMIR\n");
    if ((i = fscanf(file, %s, &text)) < 0)
    {
        printf("%d", i);
        return 3;
    }
    i = ft_strlen(text);
    printf("TEXT TIENE %d CARACTERES\n", i);
    printf("%s", (char *)text);
    close(file);
    return 0;
}
