#include <stdio.h>
#include <stdint.h>

int main(int argc, char *argv[]) {

	FILE *a = fopen(argv[1],"r");
	FILE *b = fopen(argv[2],"r");

	uint32_t n1 = 0;
	uint32_t n2 = 0;
	uint32_t h1 = 0;
	uint32_t h2 = 0;
	
	fread(&n1, sizeof(n1), 1, a);
	fread(&n2, sizeof(n2), 1, b);
	
	h1 = ntohl(n1);
	h2 = ntohl(n2);

	printf("%d(0x%x) + %d(0x%x) = %d(0x%x)\n", h1, h1, h2, h2, h1+h2, h1+h2);

	fclose(a);
	fclose(b);

	return 0;

	}



