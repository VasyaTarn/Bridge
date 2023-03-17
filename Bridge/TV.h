#pragma once
#include "Device.h"

class TV : public Device
{
private:
	bool state;
	int volume;
	int channelNumber;
public:
	TV(bool state = false, int volume = 20, int chNum = 10);
	~TV() {};

	virtual bool isEnabled() override;
	virtual void enable() override;
	virtual void disable() override;
	virtual int getVolume() const override;
	virtual void setVolume(int vol) override;
	virtual int getChannel() const override;
	virtual void setChannel(int channelNum) override;
};

