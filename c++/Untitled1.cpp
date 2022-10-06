
#include <iostream>
using namespace std;
# define NO_OF_CHARS 256


bool arePermutation(string str1, string str2)
{

	int count1[NO_OF_CHARS] = {0};
	int count2[NO_OF_CHARS] = {0};
	int i;


	for (i = 0; str1[i] && str2[i]; i++)
	{
		count1[str1[i]]++;
		count2[str2[i]]++;
	}


	if (str1[i] || str2[i])
	return false;


	for (i = 0; i < NO_OF_CHARS; i++)
		if (count1[i] != count2[i])
			return false;

	return true;
}


int main()
{
	string str1 = "alice bob";
	string str2 = "lic bob";
	if ( arePermutation(str1, str2) )
	printf("No");
	else
	printf("Yes");

	return 0;
}
