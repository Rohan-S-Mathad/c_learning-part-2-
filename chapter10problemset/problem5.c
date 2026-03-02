# include <stdio.h>

int main(){
        FILE* ptr;
        ptr=fopen("read.txt","r");
        int n;
        fscanf(ptr,"%d",&n);
        fclose(ptr);
        ptr=fopen("read.txt","w");
        fprintf(ptr,"%d",2*n);
     return 0;
}
