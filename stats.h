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
 * @file <Add File Name> 
 * @brief <Add Brief Description Here >
 *
 * <Add Extended Description Here>
 *
 * @author <Add FirsName LastName>
 * @date <Add date >
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/* Add Your Declarations and Function Comments here */ 
void print_statistics(unsigned char*,unsigned int);
/**
 * @brief finds statistics based on unsigned character array of data
 *
 * <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 *
 * @param <pointer> <A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the size of the array>
 *
 * @return void
 */
 
 /* Add Your Declarations and Function Comments here */ 
void print_array(unsigned char*,unsigned int);
/**
 * @brief <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 *
 * <A function that prints the statistics of an array including minimum, maximum, mean, and median.>
 *
 * @param <pointer> <A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the size of the array>
 *
 * @return void
 */


/* Add Your Declarations and Function Comments here */ 
unsigned char find_median(unsigned char*,unsigned int);
/**
 * @brief <finds median>
 *
 * <Given an array of data and a length, returns the median value>
 *
* @param <pointer> <A unsigned char pointer to an n-element data array>
* @param <length> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char median>
 */


/* Add Your Declarations and Function Comments here */ 
unsigned char find_mean(unsigned char*,unsigned int);
/**
 * @brief <finds mean>
 *
 * <Given an array of data and a length, returns the median value>
 *
 * @param <pointer> <A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char mean>
 */

/* Add Your Declarations and Function Comments here */ 
unsigned char find_maximum(unsigned char*,unsigned int);
/**
 * @brief <finds maximum>
 *
 * <Given an array of data and a length, returns the maximum value>
 *
 * @param <pointer> <A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char maximum>
 */
 
 unsigned char find_minimum(unsigned char*,unsigned int);
/**
 * @brief <finds minimum>
 *
 * <Given an array of data and a length, returns the minimum value>
 *
 * @param <pointer> <A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the size of the array>
 *
 * @return <unsigned char minimum>
 */

unsigned char* sort_array(unsigned char*,unsigned int);
/**
 * @brief <sorts in descending order>
 *
 * <Given an array of data and a length, sorts the array from largest to smallest. (The zeroth Element should be the largest value, and the last element (n-1) should be the smallest value. )
>
 *
 * @param <pointer> <A unsigned char pointer to an n-element data array>
 * @param <length> <An unsigned integer as the size of the array>
 *
 * @return <pointer to unsigned char sorted array >
 */



#endif /* __STATS_H__ */
