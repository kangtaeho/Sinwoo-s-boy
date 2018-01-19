
#pragma once

#define TILESIZE 50

enum SWITCH_TILE_LAYER
{
	TILE_TERRAIN,
	TILE_OBJECT,
	TILE_EVENT,
	TILE_CHARACTER,
	TILE_END,
};


enum TERRAIN
{
	TR_NONE,
	TR_BASIC,
	TR_CLIFF,
};

enum OBJECT
{
	OBJECT_PICK,
	OBJECT_STOP,
	OBJECT_NONE
};

enum DECORATION
{
	DECO_LEFT_TOP,
	DECO_RIGHT_TOP,
	DECO_LEFT_BOTTOM,
	DECO_RIGHT_BOTTOM,
	DECO_NONE
};




