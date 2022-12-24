#ifndef __FUNCTION_POINTER_H__
#define __FUNCTION_POINTER_H__

ypedeft int (*_int2int_fp)(int);

typedef int (*_intint2int_fp)(int,int);


int _add(int a, int b) {return a+b;}
int _sub(int a, int b) {return a-b;}
int _mul(int a, int b) {return a*b;}
int _div(int a, int b) {return a/b;}
int _max(int a, int b) {return a<b?b:a;}
int _min(int a, int b) {return a<b?a:b;}
int apply(int* pn, int (*pfn)(int a)){
    int i=pfn(*pn);
    *pn=i;
    return *pn;
}
int apply2(int a , int b, int* pc , int (*pfn)(int a , int b)){
    int i=pfn(a,b);
    *pc=i;
    return *pc;
}
int apply3(int* p , int (*fn_list[])(int),int a){
    for (int i=0; i<a ; i++){
        int j=fn_list[i](*p);
        *p=j;
    }
    return 0;

}
#endif