# include <stdio.h>
void printadress(int* x){
    printf("the adress is %p ", (void*)x);
}

int main(){
    int a=98;
   
    printadress(&a); 
    printf ("adress %p",(void*)&a);
     
     return 0;
}//same adress bescause call by referance .