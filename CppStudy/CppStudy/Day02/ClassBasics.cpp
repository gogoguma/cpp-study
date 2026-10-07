#include <iostream>;

/*class Player {

private:
	int hp;
	const int maxHp;

public:

	Player(int nowhp, int maxhp)
		:hp(nowhp) , maxHp(maxhp)
	{
		std::cout << "Player created" << std::endl;
	}
	~Player() {
		std::cout << "Player Destroyed" << std::endl;
	}
	void SetHp(int x) {
		hp = x;
	}
	
	void PrintHp() {
		std::cout << hp << std::endl;
	}
	void PrintMaxHp() {
		std::cout << maxHp << std::endl;
	}
};*/
class Inventory{

public:
	Inventory() {

		std::cout << "Innventory Created" << std::endl;

	}
	~Inventory() {
		std::cout << "Innventory Destroyed" << std::endl;
	}
};

class Player {
	public:

	Player(int nowhp)
		:hp(nowhp)
	{
		std::cout << "Player created" << std::endl;
	}
	~Player() {
		std::cout << "Player Destroyed" << std::endl;
	}
private:
	int hp;
	//const int maxHp;
	Inventory inventory;
};

void RunClassBasics() {
	Player player(100);
	/*
	{
		Player player(80,100);
		//Player player;
		//player.SetHp(100);
		player.PrintHp();
		player.PrintMaxHp();
	}
	std::cout << "scope End" << std::endl;
	*/


}