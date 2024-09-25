#include <stdio.h>

#include <stdlib.h>


int main(){
    int i,n;
    
    
    printf("enter a number :");
    
    scanf("%d",&n);
    
    

    for(  i = 1; i <= n; i+=2){
        printf("the numbers is :%d\n",i);
    }

    return 0;
}