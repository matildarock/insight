#include<stdio.h>
int array_sum(int vec[], int size){
    int i=0;
    int sum=0;
    while(i<size){
        sum+=vec[i];
        i++;
    }
    return sum;
}
int array_sum_ptr(int* vec , int size){
    int sum2=0;
    while(*vec){
        sum2+=*(vec);
        vec++;
    }
    return sum2;
}
int array_sum2d(int s1 , int s2 , int vec[][2]){
    int sum3=0
    for(int i=0; i<s1; i++){
        for(int j=0 ; j<s2; j++){
            sum3+=veec[i][j];
        }
    }
    return sum3;
}
int array_sum2d_ptr(int s1 , int s2 , int* vec){
    int sum4=0;
    while(*vec){
        sum4+=*(vec);
        vec++;
    }
    return sum4;
}
int jagged_array_sum_ptr(int** jagged_vector, int* size_vetor[], int row_count){
    int sum=0;
    for(int i=0 ; i<row_count; i++){
        for(int j=0; j<*size_vector , j++){
            sum+=**jagged_vector;
            *jagged_vector++;
        }
        jagged_vector++;
        size_vector++;

    }
}
int jagged_array_sum(int jagged_vector[][4], int size_vector[], int row_count){
    int sum=0;
    for(int i=0; i<roww_count; i++){
        for (int j=0; j<size_vector[i]; j++){
            sum+=jagged_vector[i][j];
        }
    }
}