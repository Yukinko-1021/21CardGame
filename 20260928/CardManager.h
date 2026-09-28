#pragma once

#include"Config.h"

class CardManager
{
	int cards[CARD_TOTAL];
	int cardCount;
public:
	//コンストラクタ
	CardManager();
	//カードを作成
	void CreateCards();
	//カードを１枚引く
	int DrawCard();
	//残りのカード枚数を取得
	int GetCardCount();
};

