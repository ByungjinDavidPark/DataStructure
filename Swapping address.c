//
//  TEST.c
//  ISCG6426
//
//  Created by David Park on 12/08/15.
//  Copyright (c) 2015 David Park. All rights reserved.
//

#include <stdio.h>


//DAVID PARK 1436062

void swap(int *num1, int *num2)
{
    int t = *num1;
    *num1 = *num2;
    *num2 = t;
}

int main()
{
    int num1, num2;
    
    printf("\n Please Enter the first number :  ");
    scanf("%d",&num1);
    
    printf("\n Please Enter the second number :  ");
    scanf("%d",&num2);
    
    swap(&num1,&num2);
    
    printf("\n First number is :  %d", num1);
    printf("\n Second number is :  %d", num2);
    
    
}
