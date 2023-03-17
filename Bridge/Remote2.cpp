#include "Remote2.h"

Remote2::Remote2(Device* dev):
	Remote(dev)
{}

void Remote2::togglePower()
{
	if (device->isEnabled())
	{
		device->disable();
		cout << "Device turned off by remote2" << endl;
	}
	else
	{
		device->enable();
		cout << "Device turned on by remote2" << endl;
	}
}
void Remote2::volumeDown()
{
	if (device->isEnabled())
	{
		device->setVolume(device->getVolume() - 1);
		cout << "Device sound is reduced by remote2" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}
void Remote2::volumeUp()
{
	if (device->isEnabled())
	{
		device->setVolume(device->getVolume() + 1);
		cout << "Device sound increased by remote2" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}
void Remote2::channelDown()
{
	if (device->isEnabled())
	{
		device->setChannel(device->getChannel() - 1);
		cout << "Channel switched forward by remote2" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}
void Remote2::channelUp()
{
	if (device->isEnabled())
	{
		device->setChannel(device->getChannel() + 1);
		cout << "Channel switched back by remote2" << endl;
	}
	else
	{
		cout << "Device turned off" << endl;
	}
}
