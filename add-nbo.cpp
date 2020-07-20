#include <stdint.h>
#include <stdio.h>
#include <netinet/in.h>

int main(int argc,char *argv[])
{
	FILE *file1,*file2;
	uint32_t value1,value2;
	uint32_t sum;

	file1 = fopen(argv[1],"rb");
	file2 = fopen(argv[2],"rb");

	fread(&value1,sizeof(uint32_t),1,file1);
	fread(&value2,sizeof(uint32_t),1,file2);

	sum = ntohl(value1) + ntohl(value2);

	printf("%d + %d = %d\n",ntohl(value1),ntohl(value2),(uint32_t)sum);

}
