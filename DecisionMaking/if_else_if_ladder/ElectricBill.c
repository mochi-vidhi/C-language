#include<stdio.h>
void main(){
    float unit,ppu=0,total=0,gst,tax;
    printf("enter units:");
    scanf("%f",&unit);
    if(unit<200){
        ppu = 12.70;
        total = unit*ppu;
        gst=(unit*12)/100;
        tax=unit+gst;
    }
    else if(unit>200&&unit<400){
        ppu = 15.30;
        total = unit*ppu;
        gst=(unit*19)/100;
        tax=unit+gst;
    }
    else if(unit>400&&unit<600){
        ppu = 18.60;
        total = unit*ppu;
        gst=(unit*16)/100;
        tax=unit+gst;
    }
    else if(unit>600){
        ppu = 20.20;
        total = unit*ppu;
        gst=(unit*18)/100;
        tax=unit+gst;
    }
    printf(" Electricity  bill\n");
    printf("****************************\n");
    printf("Units Used: %.2f\n",unit);
    printf("Price Per Unit: %.2f\n",ppu);
    printf("gst amount:%.2f\n",gst);
    printf("tax:%.2f\n",tax);
    printf("*************************\n");
    printf("Total Bill: %.2f\n",total);
}