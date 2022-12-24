void swap(int* a , int* b){
int t;
t=*a;
*a=*b;
*b=t;
}
char* address_plus(char* m , int n)
{
    char* ptr=m;
    char* ans=(ptr+n);
    return ans;
}
