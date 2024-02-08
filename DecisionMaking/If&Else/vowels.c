#include<stdio.h>
void main(){
    char a;
    printf("enter any alphabet:");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("this alphabet is vowels:");
    }
    else{
        printf("alphabet is consonant");
    }
}