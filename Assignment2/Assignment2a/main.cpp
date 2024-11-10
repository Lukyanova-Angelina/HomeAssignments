#include <iostream>
#include <fstream>
int main()
{
	std::ifstream infile; 
	std::ofstream outfile;
	std::string filename;
	std::cout<<"Write file name:"<< std::endl;
	std::cin>>filename;
	infile.open(filename,std::ios::binary|std::ios::in); // open file
	char buffer; 
	infile.seekg (0, infile.end); // move position
	int size = infile.tellg(); // write position in size
	infile.seekg(0, infile.beg);
	char* arr = new char[size]; // create arr
	outfile.open("output_"+filename,std::ios::binary|std::ios::out); // create and open file to write
	for(int i = 0; i < size; i++)
	{
		infile.read((char *)&buffer,sizeof(buffer));
		arr[i] = buffer; // add buffer to arr
	}
	int temprorary;
	for(int i; i < (size / 2); i++) // reverse arr
	{
		temprorary = arr[i];
		arr[i] = arr[size - 1 - i];
		arr[size - 1 - i] = temprorary;
	}
	outfile.write(arr,size);
	delete [] arr; // clean
	outfile.close(); // close files
	infile.close();
}
