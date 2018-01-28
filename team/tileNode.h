
#pragma once

#define TILESIZE 50

enum SWITCH_TILE_LAYER
{
	TILE_TERRAIN,
	TILE_OBJECT,
	TILE_EVENT,
	TILE_CHARACTER,
	TILE_DECORATION,
	TILE_END,
};


enum TERRAIN
{
	TR_NONE,
	TR_BASIC,
	TR_CASTLE,
	TR_DENGEON,
	TR_CLIFF,
};

enum OBJECT
{
	OBJECT_PICK, //�̴»���   �̺�Ʈ�� �ѱ�?? �ƴϸ� 
	OBJECT_TREE, //���ߴ»��� 
	OBJECT_CASTLE, //���ߴ³�
	OBJECT_CASTLEPART,
	OBJECT_CASTLEPART2,
	OBJECT_CASTLEPART3,
	OBJECT_CASTLEPART4,
	OBJECT_CASTLEPART5,
	OBJECT_CASTLEPART6,
	OBJECT_CASTLEPART7,
	OBJECT_CASTLEPART8,
	OBJECT_BRIDGE,
	OBJECT_ENTRANCE,
	OBJECT_GARDEN,
	OBJECT_DENGEON,
	OBJECT_DENGEON2,
	OBJECT_DENGEON3,
	OBJECT_DENGEON4,
	OBJECT_HILL,
	OBJECT_TOWN,
	OBJECT_OUTSIDE,
	OBJECT_NONE
};

enum DECORATION
{
	DECO_LEFT_TOP,
	DECO_RIGHT_TOP,
	DECO_LEFT_BOTTOM,
	DECO_RIGHT_BOTTOM,
	DECO_WATER,
	DECO_EMPTY,
	DECO_DENGEON,
	DECO_DENGEON2,
	DECO_HILL,
	DECO_HILL2,
	DECO_HILL3,
	DECO_HILL4,
	DECO_HILL5,
	DECO_HILL6,
	DECO_HILL7,
	DECO_HILL8,
	DECO_HILL9,
	DECO_HILL10,
	DECO_HILL11,
	DECO_HILL12,
	DECO_ROAD,
	DECO_ROAD2,
	DECO_SHADOW,
	DECO_SHADOW2,
	DECO_SHADOW3,
	DECO_LINE,
	DECO_LINE2,
	DECO_LINE3,
	DECO_LINE4,
	DECO_LINE5,
	DECO_BORDER,
	DECO_BORDER2,
	DECO_BORDER3,
	DECO_NONE
};

enum CHARACTER
{
	CHARACTER_NONE,
	CHARACTER_PLAYER_POS,
	CHARACTER_MONSTER_POS,
	CHARACTER_NPC_POS,
};

enum EVENT
{
	EVENT_NONE,
	EVENT_MOVE,
	EVENT_INTERACT,
	EVENT_PORT,
};

enum ACTING_CONDITION
{
	ACT_CONDITION_NONE,
	ACT_CONDITION_INTERSECTTILE,
	ACT_CONDITION_KEYDOWN,

};

struct tagTile_tr
{
	TERRAIN TR_INDEX;
	image* _image;
	string imageName;
	string trKey;
	vector<POINT> imageIndex;
	int maxFrame;
	bool isFrame;

	tagTile_tr()
	{
		TR_INDEX = TR_BASIC;
		_image = NULL;
		maxFrame = 1;
		isFrame = false;
	}


};

struct tagTile_obj
{
	OBJECT OBJ_INDEX;
	image* _image;
	string imageName;
	string objKey;
	vector<POINT> imageIndex;
	POINT VOLUME;
	POINT _offSet;
	POINT _parent;
	bool isFrame;

	tagTile_obj()
	{
		OBJ_INDEX = OBJECT_NONE;
		_image = NULL;
		VOLUME = { 1,1 };
		_offSet = { 0,0 };
		isFrame = false;
	}

};

struct tagTile_deco
{
	DECORATION DECO_INDEX;
	string imageName;
	string decoKey;
	image* _image;
	vector<POINT> imageIndex;
	int maxFrame;
	POINT _offset;

	int weight;
	BOOL isFrame;
	tagTile_deco()
	{
		DECO_INDEX = DECO_NONE;
		_image = NULL;
		weight = 0;
		isFrame = FALSE;
		maxFrame = 1;
	}
};

struct tagTile_event
{
	EVENT EVENT_INDEX;
	ACTING_CONDITION ACT_INDEX;
	COLORREF eventColor;
	string current, next;
	int param1, param2, param3;

	tagTile_event()
	{
		EVENT_INDEX = EVENT_NONE;
		ACT_INDEX = ACT_CONDITION_NONE;
		eventColor = NULL;
		param1 = param2 = param3 = 0;
		current = next = "";
	}
};

struct tagTile_character
{
	CHARACTER CHARACTER_INDEX;
	
	string imageName;
	string charKey;
	image* _image;
	POINT initPoint;
	string from;
	POINT _offSet;
	vector<POINT> vPatrol;

	tagTile_character()
	{
		CHARACTER_INDEX = CHARACTER_NONE;
		_image = NULL;
		initPoint = { 0,0 };
	}
};

typedef struct Save_Load_tileInfo
{
	//terrain
	string tr_key;


	//object
	string obj_key;
	POINT obj_parent;



	//deco
	string deco_key[4];
	
	
	//character
	string char_key;
	POINT char_initPoint;
	string char_connectedMap;
	//vector<int> char_patrol;
	



	//event
	EVENT EVNET_INDEX;
	string eventKey;
	ACTING_CONDITION ACT_INDEX;
	COLORREF eventColor;
	int event_param1, event_param2, event_param3;
}SAVELOAD_TILE;