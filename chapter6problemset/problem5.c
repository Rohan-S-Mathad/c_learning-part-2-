# include <stdio.h>
void claculate(int*x,int*y , int* sum ,float *avg){
    *sum= *x+*y;
    *avg=*sum/2.0;
}

int main(){
    int a,b,sum;
    float avg;
     printf("Enter the value of number");
     if (scanf("%d",&a)!=1){
     printf("enter the correct value");
     return 1 ;
     }
     printf("Enter the value of number");
     if (scanf("%d",&b)!=1){
     printf("enter the correct value");
     return 1 ;
     }
     //printf("The sum and average of two numers is %d and %f ",claculate (&a,&b,&sum,&avg));
     //above is wrong because void function does not return anything so call function first and print
     claculate (&a,&b,&sum,&avg);
     printf("The sum and average of two number is %d and %.2f respectively\n",sum,avg);
     return 0;
}