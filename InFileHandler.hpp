#ifndef INFILE_HPP_INCLUDED
#define INFILE_HPP_INCLUDED

#include <iostream>
#include <fstream>
#include <sstream>
#include <string>
#include <iterator>
#include <algorithm>
#include <vector>
#include <math.h>


template<class T>
class InFileHandler
{
public:
	
	void read_file_to_vector(const std::string file_name, std::vector<T>& buffer);
	void converter(std::string& origi);
	void read_string_to_vector(const std::string file, std::vector<T>& buffer);
	
};

template<class T>
void InFileHandler<T>::converter(std::string& origi)
{
    for(int i=0; i<origi.length(); i++)
    {
        switch (origi[i])
        {
            case '·': origi[i]=160; break;
            case 'È': origi[i]=130; break;
            case 'Ì': origi[i]=161; break;
            case 'Û': origi[i]=162; break;
            case 'ˆ': origi[i]=148; break;
            case 'ı': origi[i]=139; break;
            case '˙': origi[i]=163; break;
            case '¸': origi[i]=129; break;
        }
    }
};

template<class T>
void InFileHandler<T>::read_file_to_vector(const std::string file_name, std::vector<T>& buffer)
{
	std::ifstream in_file(file_name.c_str());
	T temp;
	while(in_file>>temp)
	{
		
        //converter(temp);
        //std::string trash;
        //in_file>>trash;
        //in_file>>trash;
        buffer.push_back(temp);
	}
}

template<class T>
void InFileHandler<T>::read_string_to_vector(const std::string file, std::vector<T>& buffer)
{
	std::stringstream in_file;
	in_file<<file;
	T temp;
	while(in_file>>temp)
	{
        converter(temp);
        buffer.push_back(temp);
	}
}

#endif
