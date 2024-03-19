#include<stdio.h>
int main(){
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    int r =0;//r=reverce
    while(n>0){
        r = r + (n%10);// n%10 ka matlab hai last digit ko print karne ke liye n ko 10 se divide karne se digits kam hote jayege or unko 1,2,3....ese lege 
        r = r*10;//ex:4321 ko ulta print karna hai to 1 ko 10 se multiply kar diya or usme bad me lastdigit yani 2 add kar diya jisse 12ho gaya ese chalta rahega..jisse1234print hoga.
        n = n/10;   
    }
    r=r/10;
    printf("The reverce number is %d",r);
    return 0;

}