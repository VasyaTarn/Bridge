#pragma once
#include "Device.h"

class Radio : public Device
{
private:
	bool state;
	int volume;
	int channelNumber;
public:
	Radio(bool state = false, int volume = 30, int chNum = 5);
	~Radio() {};

	virtual bool isEnabled() override;
	virtual void enable() override;
	virtual void disable() override;
	virtual int getVolume() const override;
	virtual void setVolume(int vol) override;
	virtual int getChannel() const override;
	virtual void setChannel(int channelNum) override;
};

