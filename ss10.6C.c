#include <stdio.h>
int main(){
	int arr[8]={1,2,3,4,5,6,7,8};
	int item; 
	int flag=-1;
	int length = sizeof(arr)/sizeof(arr[0]);
	printf("Nhap vao gia tri can tim: ");
	scanf("%d", &item);
	printf("arr[n]=");
	for(int i=0; i<length; i++){
		if(arr[i]==item){
			printf(" %d",  i);
			flag=i;
		}	
}
	if(flag==-1){
	printf("Khong tim thay phan tu %d trong mang", item);
}
}
