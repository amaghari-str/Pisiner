int count_words(char *str){
    int i = 0;
    int words = 0;
    while (str[i]){
        if (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ','){
            words++;
            while (str[i] == ' ' || str[i] == '\t' || str[i] == '\n' || str[i] == ',')
                i++;
        }
        i++;
    }
    return words;
}
