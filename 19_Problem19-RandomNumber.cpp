#include iostream    Include the iostream library for inputoutput operations.
#include string      Include the string library to work with stdstring.
#include cstdlib
using namespace std;   Use the standard namespace to simplify usage of standard library functions.

int RandomNumber(int From, int To)
{
	int Number = rand() % (To - From + 1) + From;
	return Number;
}
int main()
{
	srand((unsigned)time(NULL));
	cout  RandomNumber(10, 20);


    return 0;   Return 0 to indicate that the program executed successfully.
}
