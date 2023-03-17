#include "Remote1.h"

Remote1::Remote1(Device* dev) :
	Remote(dev)
{}

void Remote1::togglePower()
{
	if (device->isEnabled())
	{
		device->disable();
		cout << "Device turned off by remote1" << endl;
	}
	else
	{
		device->enable();
		cout << "Device turned on by remote1" << endl;
	}
}
void Remote1::volumeDown()
{
	if (device->isEnabled())
	{
		device->setVolume(device->getVolume() - 1);
		cout << "Device sound is reduced by remote1" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}
void Remote1::volumeUp()
{
	if (device->isEnabled())
	{
		device->setVolume(device->getVolume() + 1);
		cout << "Device sound increased by remote1" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}
void Remote1::channelDown()
{
	if (device->isEnabled())
	{
		device->setChannel(device->getChannel() - 1);
		cout << "Channel switched forward by remote1" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}
void Remote1::channelUp()
{
	if (device->isEnabled())
	{
		device->setChannel(device->getChannel() + 1);
		cout << "Channel switched back by remote1" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}