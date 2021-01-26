/*.Използвайте функцията getchar(), с която въвеждате
текст от клавиатурата, докато не подадете ЕОF(Ctrl+D). Текстът
има букви и цифри. Пребройте колко са въведените букви и
колко са въведените цифри. Определeте броя на цифрите в
стринга, като използвате оператор continue. */
#include <stdio.h>
int main(void)
{
    int counterChar = 0; //broqchi za chisla i bukvi
    int counterNumber = 0;
    char c;
    while ((c = getchar()) != EOF)
    {
        if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))  //proverqvame bukvite
        {
            counterChar++; //ako ima uvelichavame broqcha
            
        }
        else if (c >= '0' && c <= '9')  //proverqvame za chifri
        {
            counterNumber++; //ako ima uvelichavame broqcha 
            continue;
        }
    }
    printf("Numbers: %d\n", counterNumber);
    printf("Letters: %d", counterChar);
    return 0;
}
