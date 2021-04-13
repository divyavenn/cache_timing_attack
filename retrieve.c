#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <stdint.h>
#include <unistd.h>
#include <string.h>

#include <sys/types.h>
#include <sys/wait.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <arpa/inet.h>
#include <openssl/aes.h>


#define N 1000000 
int main(int argc, char* argv[]){
	unsigned char C[N];
	FILE *ptr;

	ptr = fopen("timing.bin","rb");  // r for read, b for binary

	fread(C,sizeof(C),1,ptr);

	for(int i = 0; i<N; i++)
		    printf("%i ", C[i]);
	return 0;

}
