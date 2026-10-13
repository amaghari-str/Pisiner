#include <unistd.h>

int char_in_str(char *str, char c){
    if (!*str){
        write(1, "\n", 1);
        return 0;
    }
    int i = 0;
    while (str[i]){
        if (str[i] == c){
            return i;
        }
        i++;
    }
    return i;
}
