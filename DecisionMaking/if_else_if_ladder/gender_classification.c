#include<stdio.h>
void main(){
    char gender;
    printf("enter any gender:");
    scanf("%c",&gender);
    if(gender=='f'||gender=='F'){
        printf("person is femeal");
    }
    else if(gender=='m'||gender=='M'){
        printf("person is meal");
    }
    else{
        printf("say your gender");
    }
}