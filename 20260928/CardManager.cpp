#include "CardManager.h"
#include<cstdlib>
#include<ctime>

CardManager::CardManager()
{
	cardCount = CARD_TOTAL;
}

void CardManager::CreateCards()
{
	int index = 0;
	//カード作成（44枚の方）
	for (int number = 0; number < CARD_MAX; number++)
	{
		for (int i = 0; i < CARD_DUPLICATE_COUNT; i++)
		{
			cards[index] = number;
			index++;
		}
	}

	//カードのシャッフル
	for (int j = 0; j < CARD_TOTAL; j++)
	{
		int randomIndex = j + rand() % (CARD_TOTAL - j);
		int temp = cards[j];
		cards[j] = cards[randomIndex];
		cards[randomIndex] = temp;
	}

	cardCount = CARD_TOTAL;
	
}

int CardManager::DrawCard()
{
	int card = cards[0];

	//残っているカードを前に詰める（山札で言うところ上に持ってくる感じ）
	for (int i = 0; i < INTTAL_CARD_COUNT - 1; i++)
	{
		cards[i] = cards[i + 1];
	}

	cardCount--;
}