/* NON_MATCHING: the cleared word uses r1 rather than retail's r2. */
#include "network/OnlineSocket.h"

extern "C" void *onlineSockAddrConstruct(void *address);

/* Construct the socket's inline address and initialize the socket state. */
extern "C" OnlineSocket *onlineSocketObjectConstruct(OnlineSocket *socket)
{
    u8 *address = static_cast<u8 *>(onlineSockAddrConstruct(&socket->address));
    socket = reinterpret_cast<OnlineSocket *>(address - offsetof(OnlineSocket, address));
    socket->word38 = 0;
    return socketResetAndReturn(socket);
}
