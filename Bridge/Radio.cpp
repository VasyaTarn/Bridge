#include "Radio.h"

Radio::Radio(bool state, int volume, int chNum) :
	state(state),
	volume(volume),
	channelNumber(chNum)
{
	cout << "Radio created" << endl;
}
bool Radio::isEnabled()
{
	if (state == true)
		return true;
	return false;
}
void Radio::enable()
{
	state = true;
}
void Radio::disable()
{
	state = false;
}
int Radio::getVolume() const
{
	return volume;
}
void Radio::setVolume(int vol)
{
	volume = vol;
}
int Radio::getChannel() const
{
	return channelNumber;
}
void Radio::setChannel(int channelNum)
{
	channelNumber = channelNum;
}