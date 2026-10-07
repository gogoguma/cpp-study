#include <iostream>

void RunCopyBasics()
{
    class Player {
    public: 
        Player(int hp) :hp(hp)
        {
            std::cout << "Player »ý¼º"<< std::endl;
        }
        ~Player() {
            std::cout << "Player ¼Ò¸ê" << std::endl;
        }
        void SetHp(int Hp) {
            hp = Hp;
        }
        void PrintHp() {
            std::cout << "HP: "<<hp << std::endl;
        }

    private: int hp;

    };

    Player playerA(100);
    Player playerB = playerA;
    playerA.SetHp(50);
    playerA.PrintHp();
    playerB.PrintHp();

}