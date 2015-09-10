//
//  main.c
//  ISCG6426
//
//  Created by David Park on 12/08/15.
//  Copyright (c) 2015 David Park. All rights reserved.
//
//


#include <stdio.h>



// David Park 1436062
 int main( void )
{
    int integer1, integer2 ,fiboSum, input, a;
    
    // prompt input
    
    printf("Please enter the limit number");
    scanf("%d",&input);
    
    integer1 = 0;
    integer2 = 1;
    fiboSum = 1;
    
    
    a = 1;

    
    while(a == 1)
    {
        if (fiboSum < input)
        {
            printf("%d  ",fiboSum);
            fiboSum = integer1 + integer2;
            integer1 = integer2;
            integer2 = fiboSum;
            
            
        }else
        {
            a = 0;
            printf("\nThis is end!");
            
        }
        
    }
    
} // end function main