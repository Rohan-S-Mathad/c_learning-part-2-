# include <stdio.h>

int main(){
     FILE*ptr;
    //  ptr=fopen("1434.txt","w");// earse everything and overerites
    ptr=fopen("1434.txt","a");//adds after lasttime cursor left
     int num =169;
     fprintf(ptr,"%d",num); 

     fclose(ptr);
     return 0;
}