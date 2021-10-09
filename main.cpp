/*Посчитайте количество всех возможных счастливых трамвайных билетиков. Номер билета содержит 6 цифр.*/

#include <iostream>

int main(){
    int k=0;
    int a, b, sum1, sum2, n;
    sum1=0;
    sum2=0;
    n=0;
    for(int i=0; i<=999999; i++){
        a=i;
        k=0;
        while(k<3){
            b=a%10;
            a/=10;
            sum1+=b;
            k++;
        }
        while(k<6){
            b=a%10;
            a/=10;
            sum2+=b;
            k++;
        }
        if(sum1 == sum2)
            n+=1;
        sum1 = 0;
        sum2 = 0;
    }
    std::cout << n;
    
    return 0;
}
