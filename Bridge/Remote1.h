#pragma once
#include "Remote.h"

class Remote1 : public Remote
{
public:
	Remote1(Device* dev);
	virtual void togglePower() override;
	virtual void volumeDown() override;
	virtual void volumeUp() override;
	virtual void channelDown() override;
	virtual void channelUp() override;
};

