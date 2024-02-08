#include<stdio.h>
void main(){
    int selling_price,cost_price;
    float per,profit,loss;
    printf("enter selling price:");
    scanf("%d",&selling_price);
    printf("enter cost price:");
    scanf("%d",&cost_price);
    profit=selling_price-cost_price;
    loss=cost_price-selling_price;
    printf("profit %f\n",profit);
    printf("loss %f\n",loss);
    per=profit/cost_price*100;
    printf("per_profit %f\n",per);
    per=loss/cost_price*100;
    printf("per_loss %f\n",per);

}