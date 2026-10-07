#include <iostream>
void RunDeepCopy() {

	class Player {
	private:
		int* hp;
	public:
		Player(int hp) {
			this -> hp = new int(hp);
			std::cout << "Player Created" << std::endl;
		}
		Player(const Player& other) {
			this->hp =new int(*other.hp) ;
			std::cout << "Player Copied" << std::endl;
		}
		~Player() {
			delete hp;
			std::cout << "Player Destoryed" << std::endl;
		}
		void SetHp(int hp) {
			*this->hp = hp;
		}
		void PrintHp(){
			std::cout << "Player HP : " <<*this->hp << std::endl;
		}
	};

	Player playerA(100);
	Player playerB = playerA;

	playerB.SetHp(50);

	playerA.PrintHp();
	playerB.PrintHp();

}