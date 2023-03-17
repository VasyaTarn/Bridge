#include <iostream>
#include "Client.h"
#include "TV.h"
#include "Radio.h"
#include "Remote1.h"
#include "Remote2.h"


int main()
{
    Client* client = new Client();

    /*Device* dev1 = new TV();
    Remote* rem1 = new Remote1(dev1);*/

    Device* dev2 = new Radio();
    Remote* rem2 = new Remote2(dev2);

    client->clientCode(*rem2);
    


    return 0;
}

