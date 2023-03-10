#include <stdio.h>
int main()
{
    int n,i,j;

    scanf("%d",&n);
    int arr[n];
<<<<<<< HEAD
    printf("this program reverses the array");
=======
    printf("hey! this this the array reversel program");
>>>>>>> d0c7c48 (changes done from u)
    for(i=n;i>0;i--){



        scanf("%d",&arr[i-1]);
    }
    for(j=0;j<n;j++){
        printf("%d ",arr[j]);
    }
    return 0;
}
