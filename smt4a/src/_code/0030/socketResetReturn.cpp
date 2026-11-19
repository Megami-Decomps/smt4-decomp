#include "network/OnlineSocket.h"

/* Reset the socket and return it to the caller. */
extern "C" OnlineSocket *socketResetReturn(OnlineSocket *socket)
{
    return socketResetAndReturn(socket);
}
