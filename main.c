#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <unistd.h>

char caesar_cyph(char);

int main(int argc, char **argv)
{
	if (argc > 1)
	{
		char* instr = argv[argc-1];
		int islen = strlen(instr);
		islen--;
		int i;
		for (i = 0; i <= islen; i++) 
			instr[i] = caesar_cyph(instr[i]);

		fprintf(stdout, "%s", instr);
		
	}
	else if (argc == 1)
	{
		char inchr;
		int n;
		while ((n = read(0, &inchr, 1)))
		{
			inchr = caesar_cyph(inchr);
			printf("%c", inchr);
		}
	}
	return 0;
}

char caesar_cyph(char in)
{
    if (in >= 97 && in <= 122)
    {
	if (in > 109)
	    in -= 13;
	else if (in <= 109)
	    in += 13;
    }
    else if (in >= 65 && in <= 90) 
    {
	if (in > 77)
	    in -= 13;
	else if (in <= 77)
	    in += 13;
    }
    return in;
}
