#include<stdio.h>
int isConsective(int n,int arr[]){
    for(int i=0;i<n-2;i++){
        if((arr[i]%2!=0) && (arr[i+1]%2!=0) && (arr[i+2]%2!=0)){
            return 1;
        }

    }
    return 0;                                                                 

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    printf("%d",isConsective(n,arr));
}