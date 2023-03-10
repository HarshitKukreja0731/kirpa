#include <stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);
    int arr[n];
    printf("this program reverses the array");
    for(i=n;i>0;i--){



        scanf("%d",&arr[i-1]);
    }
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
