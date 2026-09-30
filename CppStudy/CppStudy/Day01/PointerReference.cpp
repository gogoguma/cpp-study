#include <iostream>
using namespace std;

void SetHpByPointer(int* Pointer) {
	*Pointer = 50;
}
void SetHpByReference(int& Reference) {
	Reference = 80;
}
void PrintPlayerHp(int playerHp) {
	cout << "Player Hp: " << playerHp << endl;
}

void PrintPlayerHpAddress(int* playerHpadr) {
	cout << "Player Hp Address: " << playerHpadr << endl;
}
void PointerTest(int* hpPtr) {
	*hpPtr = 200;
	hpPtr = nullptr;

}

void ChangeTarget(int*& hpPtr, int& target) {
	hpPtr = &target;
}
void SetHp(int& hp) {
	hp = 50;
}
void PrintHp(const int& hp) {
	cout << hp << endl;
}

void RunDay01()
{
	//int* ptr;
	int playerHp = 100;
	int monsterHp = 500;

	const int* ptrA = &playerHp;

	//*ptrA = 50;
	ptrA = &monsterHp;

	// 1. ptrA를 이용해서 playerHp를 50으로 변경 시도
	//    컴파일 오류 확인 후 주석 처리

	// 2. ptrA가 monsterHp를 가리키도록 변경


	int* const ptrB = &playerHp;

	*ptrB = 50;

	//ptrB = &monsterHp;
	// 3. ptrB를 이용해서 playerHp를 50으로 변경

	// 4. ptrB가 monsterHp를 가리키도록 변경 시도
	//    컴파일 오류 확인 후 주석 처리


	//int* hpPtr = &playerHp;
	//SetHp(playerHp);
	//PrintHp(playerHp);
	//ChangeTarget(hpPtr, monsterHp);
	//*hpPtr = 300;
	//int* hpPtr = &playerHp;
	//PointerTest(hpPtr);
	//PrintPlayerHp(monsterHp);
	//PrintPlayerHpAddress(hpPtr);
	//PrintPlayerHpAddress(hpPtr);

	//*hpPtr = 70;

	//SetHpByPointer(hpPtr);
	//PrintPlayerHp(playerHp);
	//SetHpByReference(playerHp);
	//PrintPlayerHp(playerHp);
	/* {
		int damage = 35;
		playerHp -= damage;
	}
	//PrintPlayerHp(damage);
	PrintPlayerHp(playerHp);*/


}