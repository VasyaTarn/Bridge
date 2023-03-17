#pragma once
#include <iostream>

using namespace std;

class Device
{
public:
	virtual ~Device() {};

	virtual bool isEnabled() = 0;
	virtual void enable() = 0;
	virtual void disable() = 0;
	virtual int getVolume() const = 0;
	virtual void setVolume(int vol) = 0;
	virtual int getChannel() const = 0;
	virtual void setChannel(int channelNum) = 0;
};

