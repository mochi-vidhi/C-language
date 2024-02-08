#include<stdio.h>
void main(){
    int ram,harddisk,internet,price,discount;
    printf("enter ram of computer:\n");
    scanf("%d",&ram);
    printf("enter harddisk of computer:\n");
    scanf("%d",&harddisk);
    printf("enter internet of computer:\n");
    scanf("%d",&internet);
    printf("enter price of computer:\n");
    scanf("%d",&price);
    printf("enter discount of computer:\n");
    scanf("%d",&discount);
    // print values
    printf("ram in GB=%d\n",ram);
    printf("harddisk in TB=%d\n",harddisk);
    printf("internet in GBPS=%d\n",internet);
    printf("price=%d\n",price);
    printf("discount=%d\n",discount);
}