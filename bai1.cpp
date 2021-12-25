#include<stdio.h>
int main() {
  	int n;
  	printf("Nhap vao so n: ");
    scanf("%d", &n);
    float S = 0;
    if(n > 0) {
    	for(int i=1;i<=n;i++){
    		S=S+ 1.0/i ;
		} 
		printf("gia tri S = %f",S);
	    }
		else
		{
		printf("error");
        }
}
