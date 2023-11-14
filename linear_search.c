#include<stdio.h>
int ls(int a[],int key,int dim){
    int i,c=0;
    for(i = 0;i < dim;i++){
        if(a[i]==key){
        printf("\n%d at %d",key,i+1);
        break;
       }
       else
       {
        c++;
       }
       
    }
    if (c == dim){
        printf("%d is not Present",key);
    }
    return 0;
}

int main(){
    int a[3] = {56,98,67};
    ls(a,64,3);
    return 0;
}