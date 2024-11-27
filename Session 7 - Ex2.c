#include<stdio.h>
int main(){
	int i,array[5];
	for(i = 0 ; i <= sizeof(array)/sizeof(int) ; i++ ){
		printf("Nhap vao 1 so cho mang: ");
		scanf("%d",&array[i]);
		printf("So o vi tri %d cua mang la: %d\n ", i , array[i]);
	}
}
