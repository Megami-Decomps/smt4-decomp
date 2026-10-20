/* The global at 0x5949d8: a pointer-sized hub the networking code reaches through. Only the
 * fields that the shard functions touch are named; the offsets are from those accesses. */
#ifndef SHARD_NETMANAGER_H
#define SHARD_NETMANAGER_H

#include "common.h"

/* The object at NetManager.session: two sub-objects at 0x14 and 0x70. */
typedef struct NetSession {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u8 partA[0x5C];
    /* 0x70 */ u8 partB[1];
} NetSession;

typedef struct NetManager {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ NetSession *session;
} NetManager;

extern NetManager DAT_005949d8;

#endif
