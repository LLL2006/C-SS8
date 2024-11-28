#include <stdio.h>
int main() {
		int arr[]={1, 2, 3, 4, 5};
		int tim;
		int count = 0;
		int i;
		
		
		printf("Nhap phan tu : ");
		scanf("%d",&tim);
		
		for(i = 0; i < 5; i++) {
			if (arr[i] == tim) {
			count++;
			break;
			}	
		}
		
		if(count==1) {
			printf("Vi tri cua phan tu trong mang la %d \n",i+1);
		} else {
			printf("Phan tu khong ton tai trong mang \n");
		}
		
	return 0;
}
