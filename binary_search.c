#include<stdio.h>
int bs(int a[],int key,int low,int high){
    int mid,c=0;
    while(low<=high){
        mid = (low + high)/2;
        if(a[mid] == key){
            c = 1;
            break;
        }
        else
        {
            if (key < a[mid])
            {
                high = mid - 1;
            }
            else
            {
                low = mid + 1;
            }
        }
    }
    if(c == 1)
    printf("%d at %d",key,mid);
    else
    printf("%d is not Present",key);
    return 0;
}


int main(){
    int a[3] = {56,98,167};
    bs(a,167,0,2);
    return 0;
}