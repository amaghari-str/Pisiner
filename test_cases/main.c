#include <stdio.h>
#include <stdlib.h>

int	ft_sqrt(int nb);
int	ft_is_prime(int nb);
int ft_find_next_prime(int nbr);
int	ft_iterative_power(int nb, int power);
int char_in_str(char *str, char c);
int	ft_iterative_factorial(int nb);
int count_words(char *str);
char *char_input(const char *prompt);

int ft_strcat(char *option, char *comper){
    int i = 0;
    while(option[i]){
        if (option[i] != comper[i])
            return 0;
        i++;
    }
    return 1;
}
void clean_buffer(void) {
    int c;
    while ((c = getchar()) != '\n' && c != EOF);
}
int desider(char *option){
    int v;
    char get_sqer[] = "get_sqer";
    char get_prime[] = "get_prime";
    char get_next_prime[] = "get_next_prime";
    char get_power[] = "get_power";
    char get_fibonachi[] = "get_fibonachi";
    char get_factorial[] = "get_factorial";
    char found_char [] = "found_char";
    char count_wors[] = "count_words";
    if (ft_strcat(option,get_sqer)){
        scanf("%d", &v);
        int res = ft_sqrt(v);
        printf("%d\n", res);
        return 1;
    }else if (ft_strcat(option, get_prime)){
        scanf("%d", &v);
        int res = ft_is_prime(v);
        printf("%d\n", res);
        return 1;
    }else if (ft_strcat(option, get_next_prime)){
        scanf("%d", &v);
        int res = ft_find_next_prime(v);
        printf("%d\n", res);
        return 1;
    }else if(ft_strcat(option, get_power)){
        scanf("%d", &v);
        int p;
        scanf("%d", &p);
        int res = ft_iterative_power(v, p);
        printf("%d\n", res);
        return 1;
    }else if (ft_strcat(option, get_fibonachi)){
        printf("sory is not red\n");
        return 1;
    }else if (ft_strcat(option, get_factorial)){
        scanf("%d", &v);
        int res = ft_iterative_factorial(v);
        printf("%d\n", res);
        return 1;
    }else if (ft_strcat(option, found_char)){
        char *p = "введите текст";
        char *buffer = char_input(p);
        char t;
        printf("введите букву");
        scanf("%c", &t);
        int res = char_in_str(buffer, t);
        printf("%d\n", res);
        free(buffer);
        return 1;
    }else if (ft_strcat(option, count_wors)){
        char *buffer = char_input("введите текст:");
        int res = count_words(buffer);
        printf("%d\n", res);
        free(buffer);
        return 1;
    }
    return 0;
}

int main (int argc, char **argv){
    (void)argc;
    (void)argv;
    char option[30];
    scanf("%29s", option);
    clean_buffer();
    if (!(desider(option)))
        printf("operation unsexisd");
    return 0;
}
