#include<stdio.h>
int main(){
   //bubble sort	
	int arr[]={3,8,4,1,7};
	int count;
	printf("mang truoc khi sap xep:\n");
	for(int i=0;i<5;i++){
		printf("%d\t",arr[i]);
}
printf("\n");
	for(int i=0; i<5; i++){
		for(int j=0;j<5-i-1;j++){
			count++;
		if	(arr[j]>arr[j+1]){
			int temp = arr[j];
			arr[j] = arr[j+1];
			arr[j+1] = temp; 
	}
			
		}
	}	
	printf("mang sau khi sap xep:\n");
	for(int i=0; i<5; i++){
		printf("%d\t",arr[i]);
	}
	return 0;
}
