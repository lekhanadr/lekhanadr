#include<stdio.h>
int isLower( int n,int arr[][n]){
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
           if(arr[i][j]!=0){
            return 0;
           }
        }
    }
    return 1;

}
int main(){
    int n;
    scanf("%d",&n);
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("%d",isLower(n,arr));
}