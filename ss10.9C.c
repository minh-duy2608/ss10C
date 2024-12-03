#include<stdio.h>

int main(){
	int arr[100][100];
	int m,n,i,j,sum;
	printf("Moi ban nhap vao so dong: ");
	scanf("%d",&m);
	printf("\nMoi ban nhap vao so cot: ");
	scanf("%d",&n);
	
	for(i=0;i<m;i++){
	  	for(int j=0;j<n;j++){
	  		printf("Moi ban nhap phan tu arr[%d][%d]: ",i,j);
	  		scanf("%d",&arr[i][j]);
		  }
	}
	
	for(i=0;i<m;i++){
		for(int a=0;a<n-1;a++){
			for(int j=0;j<n-a-1;j++){
			if(arr[i][j]>arr[i+1][j+1]){
				int temp=arr[i][j];
				arr[i][j]=arr[i+1][j+1];
				arr[i+1][j+1]=temp;
			}
		}
	}
}
	
	for(i=0,j=0 ;i<m, j<n ;i++,j++){
		printf("%d \n",arr[i][j]);
			sum+=arr[i][j];
		}
	
		printf("Tong duong cheo chinh la: %d \n",sum);
		return 0;
}
