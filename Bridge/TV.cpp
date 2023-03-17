#include "TV.h"

TV::TV(bool state, int volume, int chNum) :
	state(state),
	volume(volume),
	channelNumber(chNum)
{
	cout << "TV created" << endl;
}
bool TV::isEnabled()
{
	if (state == true)
		return true;
	return false;
}
void TV::enable()
{
	state = true;
}
void TV::disable()
{
	state = false;
}
int TV::getVolume() const
{
	return volume;
}
void TV::setVolume(int vol)
{
	volume = vol;
}
int TV::getChannel() const
{
	return channelNumber;
}
void TV::setChannel(int channelNum)
{
	channelNumber = channelNum;
}