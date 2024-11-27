#include<stdio.h>
int main(){
	int i, array[5] = {24,234,764,234,85};
	for(i = 0 ; i <= sizeof(array)/sizeof(int) ;i++){
		printf("Phan tu so %d la: %d\n",i,array[i] );
	}
	printf("Do dai cua mang la: %d", sizeof(array)/sizeof(int));
	return 0;
}
