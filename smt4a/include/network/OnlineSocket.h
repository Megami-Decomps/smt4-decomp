#ifndef NETWORK_ONLINESOCKET_H
#define NETWORK_ONLINESOCKET_H

#include "common.h"
#include <stddef.h>

/* The address stored inline in the 0x40-byte online socket object. */
struct OnlineSocketAddress {
    u8 bytes[0x10];
};

struct OnlineSocketState {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u32 unk10;
    /* 0x14 */ u8 flagA;
    /* 0x15 */ u8 flagB;
    /* 0x16 */ u8 unk16[2];
};

struct OnlineSocket {
    /* 0x00 */ u32 word0;
    /* 0x04 */ u32 word4;
    /* 0x08 */ u32 word8;
    /* 0x0C */ u32 wordC;
    /* 0x10 */ OnlineSocketAddress address;
    /* 0x20 */ OnlineSocketState state;
    /* 0x38 */ u32 word38;
    /* 0x3C */ u32 word3C;
};

typedef char OnlineSocketLayoutCheck[sizeof(OnlineSocket) == 0x40 &&
    offsetof(OnlineSocket, address) == 0x10 && offsetof(OnlineSocket, state) == 0x20 &&
    offsetof(OnlineSocket, word38) == 0x38 ? 1 : -1];

extern "C" void socketReset(OnlineSocket *socket);
extern "C" OnlineSocket *socketResetReturn(OnlineSocket *socket);

/* Reset a socket while keeping its object identity for a subsequent use. */
static __inline OnlineSocket *socketResetAndReturn(OnlineSocket *socket)
{
    socketReset(socket);
    return socket;
}

#endif
