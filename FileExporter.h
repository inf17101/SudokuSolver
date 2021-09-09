#pragma once
#include <fstream>
template<class T>
class FileExporter
{
private:
	std::ofstream& _of;
public:
	FileExporter(std::ofstream& of) : _of(of) {}
	void exportAsCSV(std::vector<std::vector<T>> dim2Vector, char delimiter)
	{
		/*
			accepts an ofstream object and
			writes a 2 dim vector to csv file separated 
			by the argument delimiter
		*/
		for (size_t r = 0; r<dim2Vector.size(); ++r)
		{
			for (size_t c = 0; c < dim2Vector[r].size(); ++c)
			{
				_of << dim2Vector[r][c] << delimiter;
			}
			_of << '\n';
		}
	}
};

