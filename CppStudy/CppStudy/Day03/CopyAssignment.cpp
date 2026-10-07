#include <iostream>
void RunCopyAssignment() {
	class Player {

	private :
		int* hp;
		
	public:
		Player(int HP) {
			this->hp = new int(HP);
		}
		Player(const Player& other) {
			this->hp = new int(*other.hp);
		}
		Player& operator= (const Player& other) {
			if (this == &other)
				return *this;
			else {
				delete this->hp;
				this->hp = new int(*other.hp);
				return *this;
			}

		}
		~Player() {
			delete hp;
		}

		void SetHp(int hp) {
			*this->hp = hp;
		}

		void PrintHp() {
			std::cout <<"Player HP : "<<*this->hp << std::endl;
		}

	};
	Player playerA(100);
	Player playerB(200);
	playerB = playerA;
	playerA.PrintHp();
	playerB.PrintHp();
	playerB.SetHp(50);
	playerA.PrintHp();
	playerB.PrintHp();
	playerA = playerA;
}