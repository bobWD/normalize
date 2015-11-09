	// concatenation: too many files
	// ETT: char riga[1000];
	// ETT: printf("ffmpeg -i \"concat:");
	// ETT: while( fscanf(fp, "%s", riga )==1 )
		// ETT: printf("%s|", riga);
	// ETT: printf("\b\" -acodec copy /dev/shm/all.mp3");
	

#include <stdio.h>

int main(int argc, char **argv)
{
	FILE *fp = fopen("/dev/shm/tmp/trash/lst", "r");
	
	int n;
	while( fscanf(fp, "S-%d.mp3\n", &n )==1 )
		if(n<1000)
			printf("mv S-%d.mp3 S-%04d.mp3\n", n, n);
	
	
	fclose(fp);
	return 0;
}

