#include<stdio.h>
int main(){
	int n,m;
	int arr[n][m];
	printf("moi ban nhap so dong:");
	scanf("%d",&n);
	printf("moi ban nhap vao so cot:");
	scanf("%d",&m);
	printf("nhap phan tu cho mang %d %d:\n",n,m);
	 for(int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("Nhap phan tu tai vi tri arr[%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
     for (int i = 0; i < m; i++){
        for (int j = 0; j < n - 1; j++){
            for (int k = 0; k < n - 1 - j; k++){
                if (arr[j][k] > arr[k][k+1]){
                	int temp = arr[j][k];
                    arr[j][k] = arr[j][k+1];
                    arr[j][k+1] = temp;
         }
     }
  }
}
     printf("Mang sau khi sap xep cac phan tu theo tung cot:\n");
     for (int i = 0; i < n; i++){
        for (int j = 0; j < m; j++){
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}
