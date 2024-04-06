/*!
@file       the name of source file is q.c
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   lab 6
@date       file created on 10/10/2023
@brief      provide a brief explanation about what this source file does:
            This file is contains 6 function definitions be to called by 
            main in qdriver the 6 functions are 
            - int read_data(double grades_array[], int max_array_size)  // recives input from file and put the data into array and return size of array
            - int max_index(double const grades[], int npts)            // find largest value in array and returns it
            - int min_index(double const grades[], int npts)            // find smallest value in array and returns it
            - double mean(double const grades[], int npts)              // find average of sum of all the values in the array and returns it
            - double variance(double const grades[], int npts)          // find the variance in the array and returns it
            - double std_dev(double const grades[], int npts)           // find the standard deviation of the array and returns it
__________________________________________________________________________*/

#include <stdio.h>
#include <math.h>
#include "q.h"

int read_data(double grades_array[], int max_array_size) {                      //get input from file and put the data into array and return size of array
    int array_size = 0;
    double val = 0.00;
    while ((scanf("%lf", &val) != EOF) && array_size < max_array_size ) {       // scan data until reaching EOF(end of file) while smaller then max array size
        grades_array[array_size++] = val;                                       // store data in position i in grades_array then increment array size by 1 
    }
    return array_size;
}

int max_index(double const grades[], int npts){                                 //find largest value in array
    double max = grades[0];
    int position = 0;
    for(int i = 0; i != npts; i++){
        (max < grades[i]) ? (max = grades[i]), (position = i) : 1;              //comparing values and storing the larger value into max, to be done until the loop ends
    }
    return position;                                                            //returing the position of the largest value in the array
}

int min_index(double const grades[], int npts){                                 //find smallest value in array
    double min = grades[0];
    int position = 0;
    for(int i = 0; i != npts; i++){
        (min > grades[i]) ? (min = grades[i]), (position = i) : 1;              //comparing values and storing the smallesr value into min, to be done until the loop ends
    }
    return position;                                                            //returing the position of the smallest value in the array
}

double mean(double const grades[], int npts){                                   //find average of sum of all values in the array
    double average = 0.00;
    for(int i = 0; i != npts; i++){
        average += grades[i];                                                   //adding all the values in the array into the variable average
    }
    return average /npts;                                                      //dividing the value in the variable average by the total number of values in the array and returing it
}

double variance(double const grades[], int npts){                               //find the variance in the array
    double sample_mean =  mean(grades, npts), variance = 0.00;                  //using mean function to identify sample mean value for variance calculation

    for(int i = 0; i != npts; i++){
        variance += pow((grades[i]- sample_mean),2);                            //summing the total numarator value for variance calculation 
    }
    return variance/(npts-1);                                                   //dividing variance by total number of value in a array and subtracting by 1 and returning it 
}

double std_dev(double const grades[], int npts){                                //find the standard deviation of the array
    return sqrt(variance(grades, npts));                                        //calculating standard deviation by square rooting the returned value from variance function;
}
