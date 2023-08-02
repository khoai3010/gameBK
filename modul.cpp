#include "Header\common.h"

string modulPath = "C:\\projects\\Cpp\\GameBKProject\\gameBK\\modul\\";
string objSubfix = ".obj";

Modul::Modul(int id, string name, Vector3 position, Vector3 scale, Vector3 rotation)
{
	Modul::id = id;
	Modul::name = name + to_string(id);
	Modul::position = position;
	Modul::scale = scale;
	Modul::rotation = rotation;
	Modul::path = modulPath + Modul::name + objSubfix;
	Modul::byte = sizeof(byte) + sizeof(this) + sizeof(id) + sizeof(name) + sizeof(position) + sizeof(rotation) + sizeof(path);
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

	modulFile << name << endl;
	modulFile << byte << endl;

	for (int i = 0; i < name.length(); i++)
		modulFile << int(name[i]);

	modulFile << position.x << position.y << position.z;
	modulFile << scale.x << scale.y << scale.z;
	modulFile << rotation.x << rotation.y << rotation.z;
	modulFile << endl;

	modulFile.close();
}

void Modul::AddToMap(string mapPath)
{
	ofstream modulFile;
	modulFile.open(mapPath, ios::app);

	if (!modulFile.is_open())
	{
		cout << "Open object file unsuccess" << endl;
		return;
	}

	modulFile << endl;
	modulFile << "OBJ" << id << endl;
	modulFile << name << endl;
	modulFile << position.x << ',' << position.y << ',' << position.z << endl;
	modulFile << scale.x << ',' << scale.y << ',' << scale.z << endl;
	modulFile << rotation.x << ',' << rotation.y << ',' << rotation.z << endl;

	modulFile.close();
}