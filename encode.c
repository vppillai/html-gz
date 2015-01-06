#include <stdio.h>
#include <string.h>
int main()
{
	FILE *fp;
	fp=fopen("./encoded.gz","r");
	int fileSize;
	fseek(fp, 0L, SEEK_END); 
	fileSize=ftell(fp);
	fseek(fp,0L,SEEK_SET);
	printf("={");
	while(!feof(fp))
	{
		printf("0x%x,",fgetc(fp));
	}
	printf("\b};\n");

}
