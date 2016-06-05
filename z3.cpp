#include <stdio.h>

int main(void)
{
	FILE* fp = fopen("text.txt", "w+");
	
	if(!fp) {
		printf("\nERROR!\n");
		return -1;
	}
	
	fprintf(fp, "Hello, world!");
	
	fclose(fp);
	
	return 0;
}
