/*Задача 4.Напишете функцията int binarySearch(int a[], int n, int
x), която получава като първи аргумент началото на масив а,
втория аргумент е дължината на масива, а третия аргумент е
числото, което търсим. Знаем, че масива в който ще търсим
елемента е предварително подреден. Сравняваме тъсения
елемент с елемента в средата на масива. Ако той е по голям от
този в средата търсим елемента от средата до края, ако е помалък го търсим в частта от началото до средата. Това се
повтаря, докато елемента от масива не стане равен с търсения.
Тогава връщаме номера на който се намира елемента в масива
или -1 ако не се съдържа в масива. */
#include <stdio.h>
int binarySearch(int a[], int n, int x);
int main(void){
    int a[10]={ 1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(a) / sizeof(a[0]); 
    int x = 8; 
     printf("The result is: %d ",binarySearch(a,n,x));

    return 0;
}
int binarySearch(int a[], int n, int x){
    int middle;
    int low=0;
    int high=n-1;
    while(low<=high){
        middle=(low+high)/2; 
        if(x<a[middle]){
            high=middle+1;
        }
        else if(x> a[middle]){
            low=middle+1;
        }
        else return middle;
    }
    return -1;
}