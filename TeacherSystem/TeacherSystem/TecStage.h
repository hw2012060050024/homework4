#pragma once
#include"TempManger.h"
#include"AdManger.h"
#include"TeacManger.h"
class TecStage
{
public:
	TecStage(void);
	~TecStage(void);
    void run();
private:
	TempManger *TpM;
	AdManger *AdM;
	TeacManger *TcM;
};

