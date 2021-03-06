#ifndef ACTOR_H_
#define ACTOR_H_

#include "GraphObject.h"
#include <string>

// Students:  Add code to this file, Actor.cpp, StudentWorld.h, and StudentWorld.cpp
class StudentWorld;
class Actor: public GraphObject
{
public:
	Actor(int imageID, int startX, int startY, int startDirection, double size, int depth, StudentWorld* world);
	virtual void doSomething() = 0;
	virtual bool isAlive() = 0;
	virtual bool collided() = 0;
	virtual ~Actor();
//	virtual void sufferDamage() = 0;
	StudentWorld * getWorld();
private:
	StudentWorld * currWorld;

};

/*class Ship : public Actor
{
public:
	Ship(int x, int y, StudentWorld* world);
	virtual ~Ship();
	virtual bool isAlive();
	int get_HP();
	virtual void sufferDamage() = 0;
private:
	int m_hp;

};*/

class NachenBlaster : public Actor
{
public:
	NachenBlaster(StudentWorld* world);
	~NachenBlaster();
	virtual void doSomething();
	int get_HP();
	virtual bool isAlive();
	virtual void moveTo(double x, double y);
	bool collided();
	int curr_cab();
	int curr_tor();
private:
	int m_hp, cabbage_pts, torCount;
//	Cabbage m_count[];
};

class Star : public Actor
{
public:
	Star(int x, int y, StudentWorld* world);
	~Star();
	virtual void moveTo();
	virtual void doSomething();
	virtual bool isAlive();
	bool collided();

private:

};
class Explosion : public Actor
{
public:
	//Explosion();
};
class Cabbage :public Actor
{
public:
	Cabbage(int x, int y, StudentWorld* world);
	bool isAlive();
	void doSomething();
	bool collided();
private:
	

};
class Turnip : public Actor
{
public:
	Turnip(int x, int y, StudentWorld* world);
	bool isAlive();
	void doSomething();
	bool collided();
private:

};
class Flatulence_Torpedo : public Actor
{
public:
	Flatulence_Torpedo(int x, int y, StudentWorld* world);
	bool isAlive();
	void doSomething();
	bool collided();
private:

};
class Extra_Life_Goodie: public Actor
{

};
class Repair_Goodie : public Actor
{

};
class Flatulence_Torpedo_Goodie : public Actor
{

};
class Smallgon :public Actor
{
public:
	Smallgon(int x, int y, StudentWorld* world, NachenBlaster* ship);
	bool isAlive();
	void doSomething();
	bool collided();
	bool checkInRange();
private:
	int m_hp, plan_length, flight_speed, travel_direction;
	//travel_directions: 0 is left, 1 is down and left, 2 is up and left
	NachenBlaster* m_Nachen;

};
class Smoregon : public Actor
{

};
class Snagglegon : public Actor
{

};
#endif // ACTOR_H_
