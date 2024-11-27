#include<stdio.h>
int main(){
	int i, array[5] = {45,34,653,124,3};
	printf("Cac phan tu co trong mang la:%d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4]);
	for(i = 0 ; i <=5 ; i++){
		if(array[i]%2==0){
			printf("Phan tu la so chan trong mang la: %d\n",array[i]);
		}else{
			printf("Phan tu khong la so chan trong mang la: %d\n", array[i]);
		}
	}
	return 0;
}
