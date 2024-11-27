#include<stdio.h>
int main(){
	int i, array[5]={34,56,123,534,23};
	printf("Cac phan tu co trong mang la:%d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4]);
	for(i = 0 ; i <= 5 ; i++){
		if(array[i] % 2 == 0){
			array[i] += 3;
		}else if(array[i] % 2 != 0){
			array[i] += 2;
		}
	}
	printf("Cac phan tu co trong mang sau khi cong la:%d %d %d %d %d\n",array[0],array[1],array[2],array[3],array[4]);
	return 0;
}
