#pragma once
using namespace std;

enum ModulType
{
	tree,
	house,
	car
};



class Modul
{
public:
	int id;
	int byte;
	string name;
	string path;
	Vector3 position;
	Vector3 scale;
	Vector3 rotation;

public:
	Modul() {}

	Modul(int id, int byte, string name, Vector3 position, Vector3 scale, Vector3 rotation);

public:
	void GenerateFile();

	void ShowInfo();
};


class Map
{

};
