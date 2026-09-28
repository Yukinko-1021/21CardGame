#pragma once

#include"Player.h"
#include"CPU.h"
#include"CardManager.h"

class Turn
{
public:
	//プレイヤーターン(プレイヤーは自分の数字次第で動くためCPUが必要ない）
	bool PlayPlayerTurn(Player* player, CardManager* cardManager);
	//CPUターン（CPUはプレイヤーの点数も参照して動くためプレイヤーとCPUが必要になる）
	void PlayCpuTurn(Player* player, CPU* cpu, CardManager* cardManager);

};

