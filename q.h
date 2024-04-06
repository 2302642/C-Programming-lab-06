/*!
@file       the name of source file is q.h
@author     Najih & DP login: n.hajasheikallaudin
@course     This source file meant for RSE course    
@section    which section of this course are you enrolled in RSE
@tutorial   lab 6
@date       file created on 10/10/2023
@brief      provide a brief explanation about what this source file does:
            This file is contains 6 function declaraction be to called by 
            main in qdriver
__________________________________________________________________________*/
int read_data(double grades_array[], int max_array_size);                   //get input from file and put the data into array and return size of array

int max_index(double const grades[], int npts);                             //find largest value in array
int min_index(double const grades[], int npts);                             //find smallest value in array

double mean(double const grades[], int npts);                               //find average of sum of all values in the array
double variance(double const grades[], int npts);                           //find the variance in the array
double std_dev(double const grades[], int npts);                            //find the standard deviation of the array
