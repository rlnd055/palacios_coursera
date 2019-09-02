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
 * @file stats.h
 * @brief Prototypes used stats.c
 *
 * Prototypes used in the unsigned char data analysis program stats.c
 *
 * @author Rolando Palacios
 * @date  Aug. 31, 2019
 *
 */
#ifndef __STATS_H__
#define __STATS_H__

/**
 * @brief Prints the statistics of an array
 *
 * Given an pointer to an array and its size, prints the
 * minimum, maximum, mean and median of the array data.
 *
 * @param ptr Pointer to data array
 * @param size Size of the array
 *
 * @return void
 */

void print_statistics(unsigned char * arr, unsigned int size);

/**
 * @brief Prints array to the screen
 *
 * Given a pointer to an array and its size,
 * prints the array data to the screen.
 *
 * @param ptr Pointer to data array
 * @param size Size of the array
 *
 * @return void
 */

void print_array(unsigned char * arr, unsigned int size);

/**
 * @brief Finds the median of an array
 *
 * Given a pointer to an array and its size,
 * returns the median value of the array data
 * rounded down to the nearest integer.
 *
 * @param ptr Pointer to data array
 * @param size Size of the array
 *
 * @return unsigned char
 */

unsigned char find_median(unsigned char * arr, unsigned int size);

/**
 * @brief Finds the mean of an array
 *
 * Given a pointer to an array and its size,
 * returns the mean value of the array data
 * rounded down to the nearest integer.
 *
 * @param ptr Pointer to data array
 * @param size Size of the array
 *
 * @return unsigned char
 */

unsigned int find_mean(unsigned char * arr, unsigned int size);

/**
 * @brief Finds the maximum of an array
 *
 * Given a pointer to an array and its size,
 * returns the maximum value of the array data.
 *
 * @param ptr Pointer to data array
 * @param size Size of the array
 *
 * @return int
 */

int find_maximum(unsigned char * arr, unsigned int size);

/**
 * @brief Finds the minimum of an array
 *
 * Given a pointer to an array and its size,
 * returns the minimum value of the array data.
 *
 * @param ptr Pointer to data array
 * @param size Size of the array
 *
 * @return int
 */

int find_minimum(unsigned char * arr, unsigned int size);

/**
 * @brief Sorts an array
 *
 * Given an pointer to an array and its size, sorts
 * the array from largest to smallest.
 *
 * @param ptr Pointer to data array
 * @param size Size of the array
 *
 * @return void
 */

void sort_array(unsigned char * arr, unsigned int size);

#endif /* __STATS_H__ */

