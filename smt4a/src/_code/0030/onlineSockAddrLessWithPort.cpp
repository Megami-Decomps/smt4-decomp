#include "common.h"

extern "C" {

typedef struct SockAddr {
    /* 0x00 */ u8 unk00[0x20];
    /* 0x20 */ u8 port;
} SockAddr;

extern int onlineSockAddrEquals(const SockAddr *a, const SockAddr *b);
extern int onlineSockAddrLess(const SockAddr *a, const SockAddr *b);

/* Strict ordering of two socket addresses: by address, then by port. */
u32 onlineSockAddrLessWithPort(u32 unused, const SockAddr *a, const SockAddr *b)
{
    return onlineSockAddrLess(a, b) != 0 || (onlineSockAddrEquals(a, b) != 0 && a->port < b->port);
}

} /* extern "C" */
