#include "stdafx.h"
#include "bow.h"


bow::bow()
{
}


bow::~bow()
{

}

HRESULT bow::init(){
	_itemImage =_itemInvenImage = IMAGEMANAGER->addImage("bow", "./image/item/Ȱ(�κ�,����).bmp", 100, 100, true, RGB(255, 0, 255));

	_isVisible = false;
	//_isVisible = false;
	_itemEffect = 1;
	_itemType = WEAPON;
	_itemState = IDLE;

	return S_OK;
}

void bow::render()
{
	_itemImage->render(getMemDC(), 150, 30);
}