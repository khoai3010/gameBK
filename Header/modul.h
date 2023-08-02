#pragma once
using namespace std;

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

	Modul(int id, string name, Vector3 position, Vector3 scale, Vector3 rotation);

public:
	void GenerateFile();

	void AddToMap(string mapPath);
};

