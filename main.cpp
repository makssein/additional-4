/*Посчитайте количество всех возможных счастливых трамвайных билетиков. Номер билета содержит 6 цифр.*/

#include <iostream>

int main(){
    int k=0;
    int a, b, sum1, sum2, n;
    sum1=0;
    sum2=0;
    n=0;
    for(int i=100000; i<1000000; i++){
        a=i;
        while(a>999){
            b=a%10;
            a/=10;
            sum1+=b;
        }
        while(a>0){
            b=a%10;
            a/=10;
            sum2+=b;
        }
        if(sum1 == sum2)
            n+=1;
        sum1 = 0;
        sum2 = 0;
    }
    std::cout << n;
}
