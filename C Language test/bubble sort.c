/*冒泡排序*/
#include <stdio.h>
int main(){
	int i,j;
	int arr[5]={45,63,11,49,46};
	for(i=0;i<5;i++){
		for(j=0;j<5;j++){
			if(arr[i]>arr[j]){
				int temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
	return 0;
}