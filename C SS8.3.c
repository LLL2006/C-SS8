#include <stdio.h>
int main() {
	int i;
	
	printf("Nhap vao kich thuoc cua mang: ");
	scanf("%d",&i);
	int x=i, y=i;
	int arr[x][y];
	for(x=0;x<i;x++){
		for(y=0;y<i;y++){
		printf("Nhap vao phan tu hang %d cot %d: ", x+1, y+1);
		scanf("%d", &arr[x][y]);
	    }
	}

    for(x=0; x<i; x++) {
    	for(y=0;y<i;y++){
    		printf("| %d |", arr[x][y]);
		}
		printf("\n");
	}
    
	return 0;
}
