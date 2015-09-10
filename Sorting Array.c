//
//  David Park - Sorting Array.c
//  ISCG6426
//
//  Created by David Park on 12/08/15.
//  Copyright (c) 2015 David Park. All rights reserved.
//

// David Park - 1436062
#include <stdio.h>

void main()
{
    int input1, number[100], i, x , temp;
    
    printf("Please input the length of the array \n");
    scanf("%d",&input1);
    printf("Enter the numbers for the array \n");
    
    // inserting input to the array
    for (i = 0; i < input1; i++)
    {
        scanf("%d",&number[i]);
    }
    
    for (i = 0; i < input1; i++)
    {
        for (x = i + 1; x < input1; x++)
        {
            if(number[i] > number[x])
            {
                temp = number[i];
                number[i] = number[x];
                number[x] = temp;
            }
        }
    }
    
    printf("Sorted Array in ascending order  \n");
    for(i = 0; i < input1; ++i)
    {
        printf("%d  ", number[i]);
        
    }
    printf("\nThis is end!!");
    
    
}