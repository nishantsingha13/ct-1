//
//  main.c
//  c2
//
//  Created by T Vikash Patra on 04/04/22.
//

#include <stdio.h>

int main() {
    
    int n,r,sum=0,temp;
    scanf("%d",&n);
        temp=n;
        while (n>0){
            r=n%10;
            sum=sum+(n*n*n);
            n=n/10;
        }
        if(temp==sum){
            printf("Armstrong number");
        }else{
            printf("Not an Armstrong number");
        }return 0;
    }
