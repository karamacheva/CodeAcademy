/*Отворете и прочетете съдържанието от файл с fscanf.
int fscanf(FILE *stream, const char *format,....)
Има същите формати, както scanf.
Първият аргумент е пойнтер към файла, от който ще четем.
Вторият аргумент е формата- Стрингът може да има следните параметриспейс, неспейс, спецификатори; */


#include <stdio.h>

int main(void){
    FILE *fileread;
    FILE *file2;

    fileread = fopen("test6.txt", "r"); 
    fscanf(fileread, "%s %s %s %s %s", fileread[0], fileread[1], fileread[2], fileread[3], fileread[4]);

    return 0;
}