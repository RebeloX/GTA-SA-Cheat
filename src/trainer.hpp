#include "MemoryHandler.hpp" //MemoryHandler class

class Trainer //trainer class, resposable for the cheats itself
{

public:
	MemoryHandler memory; //MemoryHandler

	enum //enumerates all the static address, dynamic address needed to be defined using another way
	{
		TRAINER_LIFE = 0xB793E0,
		TRAINER_MONEY = 0xB7CE50, //money address
		TRAINER_WANTED = 0xBAA420, //Wanted Level Adress
		
		//Interface address, which represents health bar/red text/enemy marker/anything red color
		//initial Address = 0xBAB22C 4 bytes of RGBA.
		TRAINER_RED = 0xBAB22C,			//red color, pointed on the initial address
		TRAINER_BLUE = TRAINER_RED + 1,		//blue color, pointed on the second byte of the address
		TRAINER_GREEN = TRAINER_RED + 2,	//green color, pointed on the third byte of the address
		TRAINER_ALPHA = TRAINER_RED + 3		//alpha, pointed on the last byte of the address
		/*
		TRAINER_ARMOR = 0xB6F5F0 + 0x548, -> dynamic
		TRAINER_X, -> dynamic
		TRAINER_Y, -> dynamic
		TRAINER_Z, -> dynamic
		TRAINER_SCORE -> don't know if exists 
		*/
	};

	void SetLife(float life);
	void SetMoney(int money);
	void SetArmor(float armor);
	void SetWantedLevel(int level);
	/*
	void SetX(double pos);
	void SetY(double pos);
	void SetZ(double pos);
	void SetPos(double x,double y, double z);
	void SetScore(int score);
	*/
};
