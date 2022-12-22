#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
int is_space(char c) {
    return c == ' ';
}
int is_not_space(char c) {
    return 0 == is_space(c);
}
int count_start_if(char* str, int (*pred)(char)) {
    int count = 0;
    
    while (*str != 0) {
        if (pred(*str)) {
            count++;
            str++;
        }
        else
            break;
    }
    return count;
}
int count_words(char* str) {
    int length = strlen(str);
    int count = 0;
    int i = 0;
    while (1) {
        int spaces_count = count_start_if(&str[i], is_space);
        i += spaces_count;
        if (i >= length) {
            break;
        }   
        int word_length = count_start_if(&str[i], is_not_space);
        if (word_length > 0) {
            count++;
        }  
        i += word_length;
        if (i >= length) {
            break;
        }
    }
    return count;
}
int main() {
    char str[255];
    printf("enter string: ");
    scanf("%255[^\n]", str);
    printf("words count: %d", count_words(str));
    return 0;
}  