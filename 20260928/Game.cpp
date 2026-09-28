#include "Game.h"
#include"Config.h"
#include<iostream>

using namespace std;




//Playerがカードを引いた際とその場合のカード合計値を表示
void Add(int& player)
{
	player += rand() % 11 + 1;
	cout << "Player:" << player;
}

//CPUがカードを引いた際とその場合のカード合計値を表示
void Add2(int& cpu)
{
	cpu += rand() % 11 + 1;
	cout << "CPU:" << cpu;
}

//入力チェック
int InputCheck()
{
	int choice;
	cout << "カードを引くか選択してください。引く→ 0 、引かない→ 1 です。" << endl;

	while (true)
	{
		cin >> choice;
		if (choice < 0 || choice > 1)
		{
			cout << "入力範囲外。再度入力してください。" << endl;
		}
		else
		{
			break;
		}
	}
}