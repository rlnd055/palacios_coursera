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
 * @file stats.c
 * @brief Unsigned char data analysis
 *
 * These are a set of functions that can analyze an array of unsigned char items
 * and report analytics on the maximum, minimum, mean and median of the data set.
 * The data set is then reordered from large to small. The statistics are rounded
 * down to the nearest integer. Finally, the data is properly printed to the screen.
 *
 * @author Rolando Palacios
 * @date Aug. 31, 2019
 *
 */

#include <stdio.h>
#include "stats.h"

/* Size of the Data Set */
#define SIZE (40)
#define COLS (8)

void main() {


  unsigned char test[SIZE] = { 34, 201, 190, 154,   8, 194,   2,   6,
                              114, 88,   45,  76, 123,  87,  25,  23,
                              200, 122, 150, 90,   92,  87, 177, 244,
                              201,   6,  12,  60,   8,   2,   5,  67,
                                7,  87, 250, 230,  99,   3, 100,  90};
/*
  unsigned char test[SIZE] = { 34, 201, 25,  122, 92,  87, 177, 244,  250, 6};*/

  print_statistics(test, SIZE);
  print_array(test, SIZE);

}

void print_statistics(unsigned char * arr, unsigned int size){
  printf("Array Statistics:\n\n");  
  printf("Mean   : %4d\n", find_mean(arr, size));
  printf("Maximum: %4d\n", arr[find_maximum(arr, size)]);
  printf("Minimum: %4d\n", arr[find_minimum(arr, size)]);
  printf("Median : %4d\n\n", find_median(arr, size));  
};

void print_array(unsigned char * arr, unsigned int size){
  int col = 0;
  int i = 0;
  for (i = 0; i < size; i++){
  	printf("%2d:%4d ", i, arr[i]);
  	col++;
  	if (col == COLS ){
  		printf("\n");
  		col = 0;
  	}
  }
};

unsigned char find_median(unsigned char * arr, unsigned int size){
  unsigned char median;
  sort_array(arr, size);
  if (size % 2){
  	median = arr[size / 2 + 1];
  }
  else {
  	median = (arr[size / 2] + arr[size / 2 + 1]) / 2;
  }
  return median;
};

unsigned int find_mean(unsigned char * arr, unsigned int size){
  unsigned int sum = 0;
  int i = 0;
  for (i = 0; i < size; i++){
  	sum += *(arr + i);
  }
  return sum / size;
};

int find_maximum(unsigned char * arr, unsigned int size){
  unsigned char max = *arr;
  int i, imax = 0;
  for (i = 0; i < size -1; i++){
  	if (max < *(arr + i + 1)){
  	  max = *(arr + i + 1);
  	  imax = i + 1;
  	}
  }
  return imax;
};

int find_minimum(unsigned char * arr, unsigned int size){
  unsigned char min = *arr;
  int i, imin = 0;
  for (i = 0; i < size - 1; i++){
  	if (min > *(arr + i + 1)){
  	  min = *(arr + i + 1);
  	  imin = i + 1;
  	}
  }
  return imin;
};

void sort_array(unsigned char * arr, unsigned int size){
  /* Bubble sort */
  unsigned char max;
  int imax;
  int i = 0;
  for (i = 0; i < size - 1; i++){
  	imax = find_maximum(arr + i, size - i) + i;/* The sub-array passed as argument has index values off-set by i */
  	if (i != imax){
  	  max = arr[imax];
  	  arr[imax] = arr[i];
  	  arr[i] = max;
  	}
  }
};




