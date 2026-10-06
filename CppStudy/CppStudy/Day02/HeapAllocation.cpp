#include <iostream>

int* CreateHp() {
	int* hp = new int(100);

	return hp;
}

void RunDay02(){
	int* hpPtr = CreateHp();
	std::cout << *hpPtr << std::endl;
	*hpPtr = 300;
	std::cout << *hpPtr << std::endl;
	delete hpPtr;
	hpPtr = nullptr;
}