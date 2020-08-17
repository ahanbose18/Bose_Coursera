/******************************************************************************
 * Copyright (C) 2017 by Alex Fosdick - University of Colorado
 *
 * Redistribution, modification or use of this software in source or binary
 * forms is permitted as long as the files maintain this copyright. Users are 
 * permitted to modify this and use it to learn about the field of embedded
 * software. Alex Fosdick and the University of Colorado are not liable for any
 * misuse of this material. 
 *
 *****************************************************************************/
/**
 * @file <stats.c> 
 * @brief <contains main and function definitions >
 *
 * <program to find statisitcal analysis of unsigned array of characters>
 *
 * @author <Ahan Bose>
 * @date <17-08-2020>
 *
 */



#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)




void main() {

  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};

  /* Other Variable Declarations Go Here */
  unsigned char *ptr; /* pointer pointing to array*/
  unsigned int length = SIZE;
  ptr = test;
  /* Statistics and Printing Functions Go Here */
  print_array(ptr,length);
  print_statistics(ptr,length);
  

}

/* Add other Implementation File Code Here */
void print_statistics(unsigned char* ptr,unsigned int length)
 {
  unsigned char median;
  unsigned char mean;
  unsigned char maximum;
  unsigned char minimum;
  unsigned char *reversed_array;
  median = find_median(ptr,length);
  printf("__Median is__ %d \n",median);
  mean = find_mean(ptr,length);
  printf("__Mean is__ %d \n",mean);
  maximum = find_maximum(ptr,length);
  printf("__Maximum is__%d \n",maximum);
  minimum = find_minimum(ptr,length);
  printf("__Minimum is__%d \n",minimum);
  reversed_array = sort_array(ptr,length);
  printf("__Sorted Array__ \n");
  print_array(reversed_array,length);
  
 }
 
 
 
 
void print_array(unsigned char* ptr,unsigned int length)
 {
 
   printf("__The elements of the array are__ \n");
   for(int i=0;i<length;i++)
    {
        
    	printf("%d \n",*(ptr+i));
  
 }
} 
 
unsigned char find_median(unsigned char* ptr,unsigned int length)
 {
 	
   unsigned char result; 	
   int i=0 , j=0 , temp=0;

   for(i=0 ; i<length ; i++)
    {
        for(j=0 ; j<length-1 ; j++)
        {
            if(ptr[j]>ptr[j+1])
            {
                temp        = ptr[j];
                ptr[j]    = ptr[j+1];
                ptr[j+1]  = temp;
            }
        }
    }
 	
 
 	
 	if(length%2==0)
 	     result = (ptr[(length-1)/2] + ptr[length/2])/2.0;
       else
            result = ptr[length/2];
 	   
   return result;
 }
 
 
unsigned char find_mean(unsigned char* ptr,unsigned int length)
 {
 	
   unsigned char result; 	
   int i=0;
   int s=0;

   for(i=0 ; i<length ; i++)
    {
       s+=*ptr;
       ptr++; 
    }
    
    result = s/length;
    return result;

 }
 
 
 unsigned char find_maximum(unsigned char* ptr,unsigned int length)
  {
   char max=0;
   char max_index=0;
   for(int i=0;i<length;i++)
    {
     if(ptr[max_index]<ptr[i])
      {
       max_index=i;
      }
    }
   max = ptr[max_index];
   return max; 
    
  }
 
 
 unsigned char find_minimum(unsigned char* ptr,unsigned int length)
  {
   char min=0;
   char min_index=0;
   for(int i=0;i<length;i++)
    {
     if(ptr[min_index]>ptr[i])
      {
       min_index=i;
      }
    }
   min = ptr[min_index];
   return min; 
    
  }
 
 unsigned char* sort_array(unsigned char* ptr,unsigned int length)
  {
	    
	  int i=0 , j=0 , temp=0;

	   for(i=0 ; i<length ; i++)
	    {
		for(j=0 ; j<length-1 ; j++)
		{
		    if(ptr[j]<ptr[j+1])
		    {
		        temp        = ptr[j];
		        ptr[j]    = ptr[j+1];
		        ptr[j+1]  = temp;
		    }
		}
	    }
	 return ptr; 
  
  }
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
