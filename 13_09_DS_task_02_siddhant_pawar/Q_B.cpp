#include<stdio.h>
#include<stdlib.h>

int main(){
	int n,n1;
	int *ptr;
	
	printf("Enter size for malloc:");
	scanf("%d", &n);
	//Malloc
	ptr = (int *)malloc(n*sizeof(int));
	for(int k=0;k<n;k++){
		scanf("%d", (ptr + k));
	}
    for(int i=0;i<n;i++){
    	printf("%d ", ptr[i]);
	}
	//Realloc
	printf("\nEnter size for realloc:");
	scanf("%d", &n1);
	for(int k=n;k<n1;k++){
		scanf("%d", (ptr + k));
	}
	ptr = (int *)realloc(ptr,n1*sizeof(int));
	
    for(int i=0;i<n1;i++){
    	printf("%d ", *(ptr+i));
	}
  
  return 0;
}
