#include <iostream>
#include <fstream>
int main()
{
	std::ifstream infile; 
	std::ofstream outfile("temppdf.pdf");
	infile.open("source.pdf",std::ios::binary|std::ios::in);
	outfile.open("temppdf.pdf",std::ios::binary|std::ios::out);
	infile.read((char *)&buffer,sizeof(buffer))
	outfile.write((char *)&buffer,sizeof(buffer));

}