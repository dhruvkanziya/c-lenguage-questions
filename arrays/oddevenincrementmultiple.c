#include<stdio.h>
int main(){
    int arr[7] = {1,2,3,4,5,6,7};
    int sumofeven = 0;
    int sumofodd = 0;
    for(int i=0;i<=6;i++){
        if(i%2!=0){
            sumofeven+= arr[i];
        }
        else
        {
            sumofodd += arr[i];
        }
        
    }
    printf("%d",sumofeven - sumofodd);
    return 0;
}