#include <direct.h>
#include <stdlib.h>
#include <stdio.h>
#include <string>
using namespace std;

#define FOLDERCOUNT 99

int main()
{
	for (int i = 1; i <= FOLDERCOUNT; i++)
	{		
		char foldername[999]{};
		char intstring[999]{};
		sprintf(foldername, "Captains Pick Round #");
		sprintf(intstring, "%d", i);
		_mkdir(strcat(foldername, intstring));
	}
}
