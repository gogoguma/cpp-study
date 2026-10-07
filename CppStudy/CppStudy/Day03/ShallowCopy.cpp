#include <iostream>


void RunShallowCopy() {

	class Player {
	private :
		int* hp;

	public:
		Player(int hp) {
			this->hp = new int(hp);
		}
		~Player() {
			delete hp;
		}

		void SetHp(int hp) {
			*this->hp = hp;
		}
		void PrintHp() {
			std::cout << *hp << std::endl;
		}
	};

	Player playerA(100);
	Player playerB = playerA;
	playerB.SetHp(50);


}