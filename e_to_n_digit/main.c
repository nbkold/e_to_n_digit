//
//  main.c
//  e_to_n_digit
//
//  Created by Weiye Wu on 1/22/17.
//  Copyright © 2017 Weiye Wu. All rights reserved.
//

#include <stdio.h>
#include <math.h>
#define MAX 20

unsigned int factorial (int a){
    unsigned int product=1;
    for (int i=a; i>0;--i){
        product*=i;
    }
    return product;
}
int main() {
    int num;
    printf("Enter an integer number between 1 and 20: ");
    scanf("%d",&num);
    
    if (num<1){
        printf("Error: number must be larger than 0\n");
    }
    else if(num>=MAX){
        num=MAX;
    }
    double digit=1.0;
    
    for (int i=0;i<num;++i){
        digit+=(1.0/factorial(i+1));
    }
    
    printf("Exponential is %.*lf\n",num,digit);
    return 0;
}
