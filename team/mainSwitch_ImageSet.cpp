#include "stdafx.h"
#include "mainSwitch.h"

void mainSwitch::imageSetting()
{
	//캐슬 타일
	IMAGEMANAGER->addImage("캐슬기둥", "./image./mapTile./castle./캐슬기둥.bmp", 200, 350, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬문타일외", "./image./mapTile./castle./캐슬문타일+끝처리용타일+계단.bmp", 400, 400, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬바닥타일", "./image./mapTile./castle./캐슬바닥타일.bmp", 200, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬벽오른쪽타일", "./image./mapTile./castle./캐슬벽오른쪽타일.bmp", 300, 500, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬벽왼쪽타일", "./image./mapTile./castle./캐슬벽왼쪽타일.bmp", 150, 500, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬벽윗타일", "./image./mapTile./castle./캐슬벽윗타일.bmp", 500, 100, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬벽타일", "./image./mapTile./castle./캐슬벽타일.bmp", 400, 300, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬벽타일2", "./image./mapTile./castle./캐슬벽타일2.bmp", 100, 100, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬벽타일11", "./image./mapTile./castle./캐슬벽타일11.bmp", 150, 100, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("캐슬타일1", "./image./mapTile./castle./캐슬벽타일1.bmp", 150, 150, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("그림자타일", "./image./mapTile./castle./그림자타일.bmp", 50, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("다리", "./image./mapTile./castle./다리(500,450).bmp", 500, 450, true, RGB(255, 0, 255)); //통짜
	IMAGEMANAGER->addImage("다리타일", "./image./mapTile./castle./다리타일(왼오).bmp", 100, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("샛길", "./image./mapTile./castle./샛길.bmp", 50, 50, true, RGB(255, 0, 255));

	IMAGEMANAGER->addImage("성길", "./image./mapTile./castle./성길.bmp", 168, 500, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("성데코타일", "./image./mapTile./castle./성데코.bmp", 100, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("성문", "./image./mapTile./castle./성문(350,150).bmp", 350, 150, true, RGB(255, 0, 255)); //통짜
	IMAGEMANAGER->addImage("정원장식", "./image./mapTile./castle./정원장식.bmp", 50, 60, true, RGB(255, 0, 255)); //통짜
	IMAGEMANAGER->addImage("정원장식긴것", "./image./mapTile./castle./정원장식긴거.bmp", 100, 250, true, RGB(255, 0, 255));	   //통짜
	IMAGEMANAGER->addImage("정원장식짧은것", "./image./mapTile./castle./정원장식짧은거.bmp", 250, 100, true, RGB(255, 0, 255));//통짜

	IMAGEMANAGER->addFrameImage("캐슬성문", "./image./mapTile./castle./캐슬성문.bmp",400,150,2,1,true, RGB(255, 0, 255)); //이벤트
	//마을 타일
	IMAGEMANAGER->addImage("마을장식1", "./image./mapTile./마을./마을장식1.bmp", 100, 100, true, RGB(255, 0, 255)); //통짜
	IMAGEMANAGER->addImage("마을장식타일", "./image./mapTile./마을./마을장식타일.bmp", 200, 200, true, RGB(255, 0, 255)); //데코레이션.
	IMAGEMANAGER->addImage("빨간집", "./image./mapTile./마을./빨간집.bmp", 300, 300, true, RGB(255, 0, 255)); //통짜
	IMAGEMANAGER->addImage("울타리", "./image./mapTile./마을./울타리.bmp", 300, 100, true, RGB(255, 0, 255)); //공용
	IMAGEMANAGER->addImage("파란집", "./image./mapTile./마을./파란집.bmp", 300, 300, true, RGB(255, 0, 255)); //통짜
	IMAGEMANAGER->addImage("풀벽", "./image./mapTile./마을./풀벽.bmp", 50, 100, true, RGB(255, 0, 255)); //통짜
	IMAGEMANAGER->addImage("풀벽가로", "./image./mapTile./마을./풀벽가로.bmp", 150, 50, true, RGB(255, 0, 255)); //통짜

	IMAGEMANAGER->addFrameImage("집문", "./image./mapTile./마을./마을장식1.bmp", 190, 97, 2,1,true, RGB(255, 0, 255)); //이벤트
	//던전타일
	IMAGEMANAGER->addImage("갑옷장식", "./image./mapTile./던전타일./갑옷장식.bmp", 150, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전계단", "./image./mapTile./던전타일./던전계단.bmp", 400, 100, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전바닥끝처리", "./image./mapTile./던전타일./던전바닥끝처리.bmp", 200, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전바닥끝처리2", "./image./mapTile./던전타일./던전바닥끝처리2.bmp", 200, 50, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전바닥타일", "./image./mapTile./던전타일./던전계단.bmp", 300, 150, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전벽타일", "./image./mapTile./던전타일./던전벽타일(100,100).bmp", 100, 100, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전벽타일2", "./image./mapTile./던전타일./던전벽타일(200,200).bmp", 200, 200, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전벽타일3", "./image./mapTile./던전타일./던전벽타일(350,400).bmp", 350, 400, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전물타일", "./image./mapTile./던전타일./던전타일1.bmp", 350, 200, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전문", "./image./mapTile./던전타일./문.bmp", 400, 100, true, RGB(255, 0, 255)); //이벤트
	IMAGEMANAGER->addImage("보스방진입", "./image./mapTile./던전타일./보스방진입(100,100).bmp", 100, 100, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("던전장식타일", "./image./mapTile./던전타일./장식(MOVE).bmp", 300, 200, true, RGB(255, 0, 255)); //가는것
	IMAGEMANAGER->addImage("던전장식타일2", "./image./mapTile./던전타일./장식2(MOVE).bmp", 300, 400, true, RGB(255, 0, 255)); //가는것
	IMAGEMANAGER->addImage("던전장식타일3", "./image./mapTile./던전타일./장식(UNMOVE).bmp", 200, 250, true, RGB(255, 0, 255)); //못가는것
	IMAGEMANAGER->addImage("철창", "./image./mapTile./던전타일./철창.bmp", 500, 150, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("화덕장식", "./image./mapTile./던전타일./화덕장식.bmp", 200, 150, true, RGB(255, 0, 255));

	//물타일(프레임)
	IMAGEMANAGER->addFrameImage("물타일", "./image./mapTile./water./water.bmp", 1200, 300, 3, 1, false, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("물타일2", "./image./mapTile./water./water2.bmp", 600, 200, 3, 1, false, RGB(255, 0, 255));
	//필드 오브젝트들
	IMAGEMANAGER->addFrameImage("바깥오브젝트", "./image./mapTile./objectTile./outTerriorObject.bmp", 200, 300, 4,6,true, RGB(255, 0, 255));
	//기본타일들
	IMAGEMANAGER->addImage("일반타일", "./image./mapTile./언더레이어타일./기본타일 50 x 50.bmp", 200, 200, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("길바닥", "./image./mapTile./언더레이어타일./길바닥.bmp", 400, 500, true, RGB(255, 0, 255));
	IMAGEMANAGER->addImage("절벽", "./image./mapTile./언더레이어타일./절벽.bmp", 600, 600, true, RGB(255, 0, 255));
	//test
	IMAGEMANAGER->addImage("나무", "./image./mapTile./object./tree.bmp", 150, 200, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("testTerrain", "./image./mapTile./test./terrain.bmp", 320, 96, 10, 3, false, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("testObject", "./image./mapTile./test./object.bmp", 320, 64, 10, 2, false, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("기본타일", "./image./mapTile./test./기본타일.bmp", 200, 200, 4, 4, false, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("절벽", "./image./mapTile./test./절벽.bmp", 300, 600, 12, 24, false, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("오브젝트타일", "./image./mapTile./objectTile./outTerriorObject.bmp", 200, 300, 4, 6, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("맵툴용캐릭터", "./image./mapTile./캐릭터./character.bmp", 440, 72, 8, 1, true, RGB(255, 0, 255));
	IMAGEMANAGER->addFrameImage("꽃", "./image./maptile./decoration./flower.bmp", 200, 200, 4, 4, true, RGB(255, 0, 255));
}

void mainSwitch::tileSetting()
{

	//TILEMANAGER->addTerrain("기본지형", "기본타일", { 0,0 }, { 2,1 }, TR_BASIC);
	POINT arr[5] = { {0,0},{2,2},{0,3},{0,2},{3,1} };
	TILEMANAGER->addTerrain("기본지형", "기본타일", arr, 5, TR_BASIC);

	//POINT arr2[1] = { { 0,3} };
	TILEMANAGER->addObject("오브젝트타일", "오브젝트타일", { 0,2 }, { 1,1 }, { 0,0 }, OBJECT_PICK);

	TILEMANAGER->addObject("트리", "나무", { 0,0 }, { 3,2 }, { 0,100 }, OBJECT_STOP);

	TILEMANAGER->addCharacter("플레이어", "맵툴용캐릭터", CHARACTER_PLAYER_POS, { 2,22 });

	POINT flowerArr1[4] = { {0,0},{1,0},{2,0},{3,0} };
	TILEMANAGER->addDecoration("꽃", "꽃", DECO_LEFT_TOP, true, flowerArr1, 4, 0);
	POINT flowerArr2[4] = { {0,1},{1,1},{2,1}, {3,1} };
	TILEMANAGER->addDecoration("꽃", "꽃", DECO_LEFT_BOTTOM, true, flowerArr2, 4, 0);
	POINT flowerArr3[4] = { { 0,2 },{ 1,2 },{ 2,2},{ 3,2 } };
	TILEMANAGER->addDecoration("꽃", "꽃", DECO_RIGHT_TOP, true, flowerArr3, 4, 0);
	POINT flowerArr4[4] = { { 0,3 },{ 1,3 },{ 2,3 },{ 3,3 } };
	TILEMANAGER->addDecoration("꽃", "꽃", DECO_RIGHT_BOTTOM, true, flowerArr4, 4, 0);

	//캐슬타일
	//TILEMANAGER->addObject("기둥", "캐슬기둥", { 0,0 }, {4,6}, OBJECT_CASTLE);
	TILEMANAGER->addObject("기둥", "캐슬기둥", { 0,0 }, { 4,6 }, { 0,0 }, OBJECT_CASTLE);
}