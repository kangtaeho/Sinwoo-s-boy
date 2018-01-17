#pragma once
#include "gameNode.h"
#include "bow.h"
#include "boomerang.h"
#include "potion.h"

#include <vector>

class player;

class inventory :
	public gameNode
{
	vector<itemParent*> _vItem;
	vector<itemParent*>::iterator _viItem;

	itemParent* _bow;
	itemParent* _boomerang;
	itemParent* _potion;

	player* _mainPlayer;
	
	//셀럭트 커서 깜빡임 위한 변수들
	bool _cursor;
	int _count;

	//셀렉트 커서 그려주는 x,y변수
	float _x, _y;

	//벡터에 가기 위한 인덱스 번호
	int _index;

	//초기설정을 위한 보이는 아이템 갯수
	int _visibleItemNum;

	//인벤 열었냐
	bool _invenOpen;

public:

	HRESULT init();
	void release();
	void update();
	void render();

	void setPlayerMemoryAddressLink(player* player){ _mainPlayer = player; }

	void setInvenOpen(bool invenOpen){ _invenOpen = invenOpen; }
	bool getInvenOpen(){ return _invenOpen; }

	inventory();
	~inventory();
};

