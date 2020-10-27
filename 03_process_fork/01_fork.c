#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>



int main (int argc, char *argv[])
{
	printf("Hello World! My pid is: %d\n", getpid());

	int r = fork();

	if (r < 0){
		printf("fork failed!\n");
		exit(1);
	} else if (r == 0){ 
		// Child Process
		printf("Hello World, I am child process. My pid is: %d\n", getpid());

	} else{
		// Parent Process
		printf("I am parent of %d. pid is: %d\n", r, getpid());
	}

	return 0;
}
