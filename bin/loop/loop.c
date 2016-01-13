#include <defs.h>
#include <stdlib.h>

int main(int argc, char* argv[])
{
	if(argc < 3) {
		printf("Usage : n_loop n_ms\n");
		return -1;
	}
	
	printf("Loop start.\n");
    //uint64_t status = 0;
	int32_t n = atoi(argv[1]);
	int32_t ms = atoi(argv[2]);
	while(n--) {
	
		sleep(ms);
		printf("Loop.\n");

		//wait(&status);	
	}
    return 0;
}
