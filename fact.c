#include<stdio.h>
int fact(int a){
    if (a==1||a==0)
    {
        return 1;
    }
    return  fact(a-1) * a;    
}

int main(){
    int  a =5 ;
    printf("%d!=%d\n", a,fact(a));
    return 0;
}