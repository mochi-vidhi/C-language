#include<stdio.h>
void main(){
    float price;
    int rs,ps;
    printf("enter price:");
    scanf("%f",&price);
    rs=price;
    ps=(rs-price)*100;
    printf("price %.2f\n",price);
    printf("rupees %d\n",rs);
    printf("paise %d\n",ps);
}