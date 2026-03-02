# include <stdio.h>
struct problem4
{
    int age ;
};

int main(){
     struct problem4 e;
     e.age=66;
     struct problem4* ptr=&e;
     printf("%d",ptr->age);//instead of (*ptr)ptr-> is used
     return 0;
}