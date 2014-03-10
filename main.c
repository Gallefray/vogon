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
		{
			instr[i] = caesar_cyph(instr[i]);
		}	
		// There's an easier way to do this, just figure out how many digits to shit by and add/sub that from the char num :P

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
    if ((in >= 0x41 && in <= 0x5A) || (in >= 0x61 && in <= 0x7A))
    {
	if (in >= 0x4E || in >= 0x6E)
	{
	    in -= 13;
	}
	else if (in <= 0x4D || in <= 0x6D)
	{
	    in += 13;
	}
    }
    return in;
}


char caesar_cyph_old(char in)
{
	switch(in)
	{
		case 'a':
			in = 'n';
			break;
		case 'b':
			in = 'o';
			break;
		case 'c':
			in = 'p';
			break;
		case 'd':
			in = 'q';
			break;
		case 'e':
			in = 'r';
			break;
		case 'f':
			in = 's';
			break;
		case 'g':
			in = 't';
			break;
		case 'h':
			in = 'u';
			break;
		case 'i':
			in = 'v';
			break;
		case 'j':
			in = 'w';
			break;
		case 'k':
			in = 'x';
			break;
		case 'l':
			in = 'y';
			break;
		case 'm':
			in = 'z';
			break;
		case 'n':
			in = 'a';
			break;
		case 'o':
			in = 'b';
			break;
		case 'p':
			in = 'c';
			break;
		case 'q':
			in = 'd';
			break;
		case 'r':
			in = 'e';
			break;
		case 's':
			in = 'f';
			break;
		case 't':
			in = 'g';
			break;
		case 'u':
			in = 'h';
			break;
		case 'v':
			in = 'i';
			break;
		case 'w':
			in = 'j';
			break;
		case 'x':
			in = 'k';
			break;
		case 'y':
			in = 'l';
			break;
		case 'z':
			in = 'm';
			break;
		case 'A':
			in = 'N';
			break;
		case 'B':
			in = 'O';
			break;
		case 'C':
			in = 'P';
			break;
		case 'D':
			in = 'Q';
			break;
		case 'E':
			in = 'R';
			break;
		case 'F':
			in = 'S';
			break;
		case 'G':
			in = 'T';
			break;
		case 'H':
			in = 'U';
			break;
		case 'I':
			in = 'V';
			break;
		case 'J':
			in = 'W';
			break;
		case 'K':
			in = 'X';
			break;
		case 'L':
			in = 'Y';
			break;
		case 'M':
			in = 'Z';
			break;
		case 'N':
			in = 'A';
			break;
		case 'O':
			in = 'B';
			break;
		case 'P':
			in = 'C';
			break;
		case 'Q':
			in = 'D';
			break;
		case 'R':
			in = 'E';
			break;
		case 'S':
			in = 'F';
			break;
		case 'T':
			in = 'G';
			break;
		case 'U':
			in = 'H';
			break;
		case 'V':
			in = 'I';
			break;
		case 'W':
			in = 'J';
			break;
		case 'X':
			in = 'K';
			break;
		case 'Y':
			in = 'L';
			break;
		case 'Z':
			in = 'M';
			break;	
		default:
			break;
	}	
	return in;
}
