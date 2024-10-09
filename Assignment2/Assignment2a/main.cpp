#include <iostream>
#include <fstream>
int main()
{
	std::ifstream infile; 
	std::ofstream outfile;
	infile.open("source.pdf",std::ios::binary|std::ios::in);
	char buffer;
	infile.seekg (0, infile.end);
    int size = infile.tellg();
    infile.seekg(0, infile.beg);
	char* arr = new char[size];
	outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
	for(int i = 0; i < size; i++)
	{
		infile.read((char *)&buffer,sizeof(buffer));
		arr[i] = buffer;
	}
	int temprorary;
	for(int i; i < (size / 2); i++)
	{
		temprorary = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temprorary;
	}
	outfile.write(arr,size);
	delete [] arr;
	outfile.close();
	infile.close();
}