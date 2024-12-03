#include<stdio.h>
int main(){
	int n;
	int count=0;
	int arr[]={1,2,3,4,5};
	printf("nhap vao so phan tu bat ki:");
	scanf("%d",&n);
	for(int i=0; i<5; i++){
		if(arr[i]>n){
			count++;
			printf("so phan tu nam o vi tri %d",n,i);
		}
		}
	    if(count==0){
	    	printf("khong co phan tu trong mang \n",n);
		}
			return 0;
		}

