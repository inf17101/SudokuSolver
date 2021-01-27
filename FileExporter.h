#pragma once
#include <fstream>
template<class T>
class FileExporter
{
private:
	std::ofstream& _of;
public:
	FileExporter(std::ofstream& of) : _of(of) {}
	void exportAsCSV(std::vector<std::vector<T>> dim2Vector)
	{
		for (int r = 0; r<dim2Vector.size(); ++r)
		{
			for (int c = 0; c < dim2Vector.size(); ++c)
			{
				_of << dim2Vector[r][c] << ',';
			}
			_of << '\n';
		}
	}
};

