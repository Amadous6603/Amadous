/*选择排序*/
#include <stdio.h>
int main(){
	int i,j,arr[5]={12,16,11,44,15};
	for(i=0;i<5;i++){
		for(j=i;j<5;j++){
			if(arr[i]<arr[j]){
			int temp=arr[i];
			arr[i]=arr[j];
			arr[j]=temp;
			}
		}
	}
	for(i=0;i<5;i++){
		printf("%d\n",arr[i]);
	}
}