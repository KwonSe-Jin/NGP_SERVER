#pragma once
#pragma comment(lib, "ws2_32.lib")
#include "TLS.h"
#include "Hero.h"
#include "Attack.h"
#include "Animal.h"
#include "Room.h"
#include <vector>
#include <list>
#include <queue>
#include <stack>
#include <map>
#include <set>
#include <unordered_map>
#include <unordered_set>
#include <thread>
#include <string>
#include <mutex>
#include <atomic>
#include <functional>
#include <iostream>
#include <winsock2.h>
#include <mswsock.h>
#include <ws2tcpip.h>
#include <stdio.h>
#include <windows.h>
#include <assert.h>
using namespace std;

constexpr float PI = 3.14159265358979323846f;

#define Cat 1
#define Dog 2
#define Bear 3

#define AnimalMax 6

//전역은 여기에 선언해주세요.
extern vector<Hero> heroes; //주인공 벡터 일단 만들어놓음 나중에 맵으로 수정 후 주석 지워주세요. 

extern int AnimalCnt ;
extern bool catlive;
extern bool doglive;
extern bool bearlive;
extern bool herodead;
extern float HeroLocationX;
extern float HeroLocationZ;


extern Attack CatAttack[6];
extern Attack DogAttack[6];
extern Attack BearAttack;

extern vector<Animal*> AniCats;
extern vector<Animal*> AniDogs;
extern Animal AniBear;




extern Room catRoom;
extern Room dogRoom;
extern Room bearRoom;



extern void AnimalCollideCat();
extern void AnimalCollideDog();

//extern void BulletCollideCat();
//extern void BulletCollideDog();
//extern void BulletCollideBear();
extern void CatAndRoomCollision();
extern void DogAndRoomCollision();
extern void Bearroomtest();
extern void HeroVSDog();	
extern void HeroVSBear();
extern void HeroVSCat();


