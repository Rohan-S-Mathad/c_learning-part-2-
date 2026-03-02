# include <stdio.h>

int changevalue(int*x){
    *x=10**x;
    return (*x);
}
int main(){
    int a=56;
    printf ("%d",changevalue(&a));
     return 0;
}