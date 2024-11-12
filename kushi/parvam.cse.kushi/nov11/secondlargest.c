#include<stdio.h>
#include<math.h>
int main(){
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int min1=__INT_MAX__;
    int min2=__INT_MAX__;
    for(int i=0;i<n;i++){
      if(arr[i]<min1){
        min2=min1;
        min1=arr[i];
      }
      else if(arr[i]<min2)
      { 
        min2=arr[i];
      }
    }
    printf("%d",min2);
    return 0;
}
