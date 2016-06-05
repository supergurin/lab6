#include <stdio.h>

int main(void)
{
	FILE* fp;
	char s[100];
	int n = 1;
	
	fp = fopen("fill.txt", "r");	
	if(!fp) {
		printf("\nERROR!\n");
		return -1;
	}
	
	while(!feof(fp)) {
		fgets(s, 100, fp);
		printf("line %d, poz %d: %s\n", n, ftell(fp), s);
		n++;
	}	
	
	fclose(fp);
	
	return 0;
}
