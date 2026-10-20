/* NON_MATCHING: register allocation only: retail keeps the object in r3 across onlineSockAddrInit (which does not clobber r3) and saves only r4; the build keeps it in r4 and saves r4-r6 */
#include "common.h"

extern "C" {

typedef struct Sub002ffd8c {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 flagA;
    /* 0x15 */ u8 flagB;
    /* 0x16 */ u8 unk16[2];
} Sub002ffd8c;

typedef struct SockAddr002ffd8c {
    /* 0x00 */ u8 data[0x10];
} SockAddr002ffd8c;

typedef struct Socket002ffd8c {
    /* 0x00 */ u32 word0;
    /* 0x04 */ u32 word4;
    /* 0x08 */ u32 word8;
    /* 0x0c */ u32 wordC;
    /* 0x10 */ SockAddr002ffd8c address;
    /* 0x20 */ Sub002ffd8c sub;
    /* 0x38 */ u32 word38;
    /* 0x3c */ u32 word3c;
} Socket002ffd8c;

void onlineSockAddrInit(SockAddr002ffd8c *address);

/* Resets a socket description. */
void socketReset(Socket002ffd8c *socket)
{
    Sub002ffd8c *sub = &socket->sub;

    socket->word0 = 0;
    socket->word4 = 0;
    socket->word8 = 0;
    socket->wordC = 0;
    sub->flagA = 0;
    socket->word3c = 0;
    socket->word38 = 0;
    sub->flagB = 0;
    onlineSockAddrInit(&socket->address);
    *(u32 *)((u8 *)socket + 0x30) = 0;
}

} /* extern "C" */
