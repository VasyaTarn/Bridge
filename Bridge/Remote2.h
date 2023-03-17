#pragma once
#include "Remote.h"

class Remote2 : public Remote
{
public:
	Remote2(Device* dev);
	virtual void togglePower() override;
	virtual void volumeDown() override;
	virtual void volumeUp() override;
	virtual void channelDown() override;
	virtual void channelUp() override;
};

