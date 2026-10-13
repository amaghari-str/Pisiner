#include <stdio.h>
#include <stdlib.h>

char *char_input(const char *prompt) {
    if (prompt) {
        printf("%s", prompt);
    }

    size_t capacity = 16; // Начальный размер буфер
    size_t size = 0;
    char *buffer = malloc(capacity * sizeof(char)); // Выделяем память

    if (!buffer) return NULL; // Проверка на ошибку выделения памяти

    int ch;
    while ((ch = getchar()) != EOF && ch != '\n') {
        // Если буфер заполнен (оставляем 1 байт под '\0'), расширяем его в 2 раза
        if (size + 1 >= capacity) {
            capacity *= 2;
            char *new_buffer = realloc(buffer, capacity * sizeof(char));
            if (!new_buffer) {
                free(buffer); // Избегаем утечки памяти при ошибке realloc
                return NULL;
            }
            buffer = new_buffer;
        }
        buffer[size++] = (char)ch;
    }

    // Обработка случая, если сразу встретился EOF и ничего не было введено
    if (size == 0 && ch == EOF) {
        free(buffer);
        return NULL;
    }

    buffer[size] = '\0'; // Добавляем нуль-терминатор
    return buffer;
}
