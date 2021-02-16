/*Задача 20. Дефинирайте стринг „I am a poor programmer”.
Заменете през пойнтер “poor” с “great”.*/
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


char* replaceWord(const char* s, const char* oldW, 
                  const char* newW) ;

int main() 
{ 
    char str[] = "I am a poor programmer"; 
    char c[] = "poor"; 
    char d[] = "great"; 
  
    char* result = NULL; 
  
 
    printf("Old string: %s\n", str); 
  
    result = replaceWord(str, c, d); 
    printf("New String: %s\n", result); 
  
    free(result); 
    return 0; 
} 

char* replaceWord(const char* s, const char* oldW, 
                  const char* newW) 
{ 
    char* result; 
    int i, cnt = 0; 
    int newWlen = strlen(newW); 
    int oldWlen = strlen(oldW); 
  
    // dali dumata se povtarq
    for (i = 0; s[i] != '\0'; i++) { 
        if (strstr(&s[i], oldW) == &s[i]) { 
            cnt++; 
  
            
            i += oldWlen - 1; 
        } 
    } 
  
    // pravim stringa sdostatychno dylyg
    result = (char*)malloc(i + cnt * (newWlen - oldWlen) + 1); 
  
    i = 0; 
    while (*s) { 
        
        if (strstr(s, oldW) == s) { 
            strcpy(&result[i], newW); 
            i += newWlen; 
            s += oldWlen; 
        } 
        else
            result[i++] = *s++; 
    } 
  
    result[i] = '\0'; 
    return result; 
} 
  
