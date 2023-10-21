#include<stdio.h>

void swap(int *p, int *q)
{
    int temp=*p;
    *p=*q;
    *q=temp;
}
void bubblesort(int arr[], int n)
{
    for(int i=0; i<n-1; i++)
        for(int j=0; j<n-i-1; j++)
         if(arr[j]> arr[j+1])
            swap(&arr[j], &arr[j+1]);
}
void printarray(int arr[], int size){
    int i;
    for(i=0; i<size; i++)
        printf("%d\n", arr[i]);

}
int main() {
    int arr[]={7,2,5,1,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    bubblesort(arr, n);
    printf("Sorted array=\n");
    printarray(arr,n);
    return 0;
}
