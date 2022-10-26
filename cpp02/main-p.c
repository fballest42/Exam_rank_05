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
    float   characters = 24;
    int     i = 0;
    FILE    *file;
    char    *text;

    file = fopen("./kk.txt", "r+");
    if (!file)
        return 1;
    while (i < characters / 2)
    {
        fprintf(file, "A\n");
        i++;
    }
    printf("AHORA VAMOS A IMPRIMIR\n");
    if ((i = fscanf(file, "%s", text)) < 0)
        return 3;
    i = ft_strlen(text);
    printf("%d\n", i);
    printf("TEXT TIENE %d CARACTERES\n", i);
    printf("%s", text);
    fclose(file);
    return 0;
}
