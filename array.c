
#include <stdio.h>
#include <conio.h>
void read_array(int arr[], int n);
int find_small(int arr[], int n);

int main(){
    int num[10], n, smallest;
    printf("Enter size of the array: ");
    scanf("%d",&n);
    read_array(num,n);
    smallest = find_small(num, n);
    printf("The smallest num of the array is: %d \n", smallest);
    getch();
    return 0;


}

void read_array(int arr[], int n){
    printf("\nEnter the list of numbers: \n");
    for(int i=0; i<n; i++){
        scanf("%d", &arr[i]);
        printf("a[%d] = %d \n",i,arr[i]);
    }


}

int find_small(int arr[], int n){

    int smallest = arr[0];
    for(int i=0;i<n;i++){
        if(smallest > arr[i])
            smallest = arr[i];
    }

    return smallest;
}

