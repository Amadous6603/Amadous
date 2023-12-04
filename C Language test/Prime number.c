/*100以内素数*/
#include <stdio.h>
int main(){
	int i,j,k;
	for(i=2;i<100;i++){	
		for(j=2;j<i;j++){
			if(i%j==0)
				break;
			if(i==j)
			printf("%d ",i);
		}
	}
	return 0;
}
