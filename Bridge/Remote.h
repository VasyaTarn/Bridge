#pragma once
#include <iostream>
#include "Device.h"

using namespace std;

class Remote
{
public:
	Remote(Device* dev) :device(dev) {};
	virtual ~Remote() {};

	virtual void togglePower() = 0;
	virtual void volumeDown() = 0;
	virtual void volumeUp() = 0;
	virtual void channelDown() = 0;
	virtual void channelUp() = 0;

	Device* device;
};

