#include "..\Header\common.h"

string modulPath = "C:\\projects\\Cpp\\GameBK\\GameBK\\modul\\";
string objSubfix = ".obj";

Modul::Modul(int id, int byte, string name, Vector3 position, Vector3 scale, Vector3 rotation)
{
	Modul::id = id;
	Modul::byte = byte;
	Modul::name = name;
	Modul::position = position;
	Modul::scale = scale;
	Modul::rotation = rotation;
	Modul::path = modulPath + name + objSubfix;
	Modul::GenerateFile();
}


void Modul::GenerateFile()
{
	ofstream modulFile;
	modulFile.open(path, ios::out);

	if (!modulFile.is_open())
	{
		cout << "Open generate obj unsuccess" << endl;
		return;
	}

	modulFile << "OBJ" << id << endl;
	modulFile << name << endl;
	modulFile << position.x << ',' << position.y << ',' << position.z << endl;
	modulFile << scale.x << ',' << scale.y << ',' << scale.z << endl;
	modulFile << rotation.x << ',' << rotation.y << ',' << rotation.z << endl;

	modulFile.close();
}

void Modul::ShowInfo()
{
	ifstream modulFile;

	if (!modulFile.is_open())
	{
		cout << "Open file unsuccess" << endl;
		return;
	}

	modulFile.open(path, ios::in);

}


