#include <stdio.h> 
  
int search(int arr[], int n, int x) 
{ 
    int i; 
    for (i = 0; i < n; i++) 
        if (arr[i] == x) 
            return i; 
    return -1; 
} 
  
int main(void) 
{ 
    int arr[100], n, x, i; 
  
    //printf("Enter the size of array: "); 
    scanf("%d", &n); 
  
    //printf("Enter the elements of array: \n"); 
    for (i = 0; i < n; i++) 
        scanf("%d", &arr[i]);
  
    //printf("Enter the element to be searched: "); 
    scanf("%d", &x); 
  
    int result = search(arr, n, x); 
    (result == -1) ? printf("invalid") 
                   : printf("%d", 
                            result); 
    return 0; 
}
