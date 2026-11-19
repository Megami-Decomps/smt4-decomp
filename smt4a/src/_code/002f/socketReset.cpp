/* NON_MATCHING: retail keeps the socket in r3 across onlineSockAddrInit (which does not clobber r3) and saves only r4; the build keeps it in r4 and saves r4-r6. */
#include "network/OnlineSocket.h"

extern "C" {

void onlineSockAddrInit(OnlineSocketAddress *address);

/* Reset a socket and its inline address. */
void socketReset(OnlineSocket *socket)
{
    OnlineSocketState *state = &socket->state;
    socket->word0 = 0;
    socket->word4 = 0;
    socket->word8 = 0;
    socket->wordC = 0;
    state->flagA = 0;
    socket->word3C = 0;
    socket->word38 = 0;
    state->flagB = 0;
    onlineSockAddrInit(&socket->address);
    state->unk10 = 0;
}

} /* extern "C" */
