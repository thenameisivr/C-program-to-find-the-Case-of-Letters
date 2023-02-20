#include <stdio.h>
int main(){
	
	char ch;
	printf("Enter the character: ");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z'){
		printf("%c is an upper case character",ch);
	}
	else{
		
		
		printf("%c is an lower case character",ch);
	}
	return 0;
}
