
////////////////////////////////////////////////////////////
// Headers
////////////////////////////////////////////////////////////
#include "Logic.hpp"
#include "InFileHandler.hpp"


////////////////////////////////////////////////////////////
/// Entry point of application
///
/// \return Application exit code
///
////////////////////////////////////////////////////////////

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	string s;
	vector<string> vect;
	InFileHandler<string> ifh;
	ifh.read_file_to_vector("file.txt", vect);
	
	for(int i = 0; i < vect.size(); i ++)
	{
		cout << vect[i];
	}
	
    return EXIT_SUCCESS;
}
