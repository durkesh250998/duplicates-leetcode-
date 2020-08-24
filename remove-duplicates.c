#include <stdio.h> 
  
int swap(int* xp, int* yp) 
{ 
    int temp = *xp; 
    *xp = *yp; 
    *yp = temp; 
    return(*xp,*yp);
} 
void selectionSort(int arr[], int n) 
{ 
    int i, j, min_idx; 
    for (i = 0; i < n-1; i++) { 
  
       
        min_idx = i; 
        for (j = i + 1; j < n; j++)               //2135
            if (arr[j] < arr[min_idx]) 
                min_idx = j; 
  
       
        swap(&arr[min_idx], &arr[i]); 
    } 
} 
void printArray(int arr[], int size) 
{ 
    int i; 
    for (i = 0; i < size; i++) 
        printf("%d ", arr[i]); 
    printf("\n"); 
} 
void removeDuplicates(int arr[],int n){

           int c,position,d,e;
           for(d=0;d<n-1;d++){
               for(e=1;e<n;e++){
                    if(arr[d]==arr[e]){ 
                        position=e;     
                        if(position<n+1){
                            
                            for(c=position;c<n-1;c++){
                                         arr[c]=arr[c+1];
                            }
                 }
                 }}}
                 printArray(arr,n);
                 }
int main() 
{ 
    
    int w;
    printf("enter total elements");
    scanf("%d",&w);
    
    int z=0;
    int arr[w];
    for(z=0;z<w;z++){
          
          scanf("%d",&arr[z]);
    }
    int n = sizeof(arr) / sizeof(arr[0]); 
    printf("Original array: \n"); 
    printArray(arr, n); 
  
    selectionSort(arr, n); 
    printf("\nSorted array in Ascending order: \n"); 
    printArray(arr, n); 
    removeDuplicates(arr,n);
    return 0; 
} 
