#pragma once

enum sign
{
	t, //tree
	h, //house
	g, //goto
	c, //car
};

class Map
{

public:
	int id;
	string name = "map"; //origin point will be left corner of the screen
	int XY[10][10]; // x represent for length, y for depth
	int Z[10];		// Z for height
	Vector2 position;
	string path;

public:
	Map() {};

	Map(int id, Vector2 position);

public:
	void MapOverview();
	void GenerateMap();
	void GenerateFile();
	string MapPath();

};
