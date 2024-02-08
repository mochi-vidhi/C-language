#include<stdio.h>
void main(){
    int amt,bal=100000,op,flag=1;
    printf("welcome  in BOB:\n");
    printf("**************************\n");
    printf("1.withdraw money:\n");
    printf("2.deposite money:\n");
    printf("3.exit\n");
    while(flag==1){
        printf("select option:");
        scanf("%d",&op);
        switch (op){
            case 1:
                printf("enter amount ");
                scanf("%d",&amt);
                if(amt>=500){
                    if(amt%500==0){
                        bal-=amt;
                        printf("%d withdrawal\n",amt);
                        printf("%d balance",bal);
                        printf("your transaction succesfully\n");
                        printf("thank you:\n");
                        printf("visit again\n");
                    }
                    else{
                        printf("only 500 notes are availeble");
                        printf("your transaction is failed\n");
                        printf("thank you:\n");
                        printf("visit again\n");
                    }
                }
                break;
            case 2:
                printf("enter the amount:");
                scanf("%d",&amt);
                if(amt>=5000){
                    if(amt%500==0){
                        bal+=amt;
                        printf("%d deposite\n",amt);
                        printf("%d balance",bal);
                        printf("your transaction succesfully\n");
                        printf("thank you:\n");
                        printf("visit again\n");
                    }
                    else{
                        printf("amount must be greter than or equal to 500");
                        printf("your transaction is failed\n");
                        printf("thank you:\n");
                        printf("visit again\n");
                    }
                }
                else{
                    printf("amount must be greater than 5000 or more\n");
                    printf("thank you\n");
                    printf("visit again\n");
                }
                break;
            case 3:
                flag=0;
                printf("thank you\n");
                printf("visit again\n");
                break;

            default:
                printf("option is not available:\n");
                break;
        }  
    }
}