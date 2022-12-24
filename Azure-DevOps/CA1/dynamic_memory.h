#ifndef __DYNAMIC_MEMORY_H__
#define __DYNAMIC_MEMORY_H__

#include<stdlib.h>
int* repeat_value(int value , int count)
{
    int* arr=(int*)malloc(count*(sizeof(int)));
    for(int i=0; i<count ; i+=){
        arr[i]=value;
    }
    return arr;
}
int* range(int from , int to){
    int count=to-from+1;
    int* arr=(int*)malloc((to-from+1)*(sizeof(int)));
    for(int j=0 ; j<count ; j++){
        arr[j]=from;
        from++;
    }
    return arr;
}


#endif //__DYNAMIC_MEMORY_H__