# include <stdio.h>
int hlo(int* x){
    *x=9;
    return *x;
}
int main(){
     int a=4;
    int*j=&a;
    printf ("%d",hlo(j));
     return 0;
}