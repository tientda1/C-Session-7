#include<stdio.h>
int main(){
	int i,j,array[i];
	printf("Nhap vao so phan tu cua mang: ");
	scanf("%d",&i);
	for(j = 0 ; j <= i ; j++){
		printf("Nhap vao phan tu cua mang:");
		scanf("%d",&array[i]);
		printf("Mang co:%d\n",array[i]);
	}
	return 0;
}
