#include "Client.h"

void Client::clientCode(Remote& remote)
{
	remote.togglePower();
	remote.volumeUp();
	remote.volumeDown();
	remote.channelDown();
	remote.channelUp();
	remote.togglePower();
	remote.volumeUp();
	remote.channelUp();
}