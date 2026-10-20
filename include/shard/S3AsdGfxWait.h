/* The part of g_asdGfxContext (Apocalypse) the wait loop uses: a "waiting" flag, an optional
 * timeout in ticks and the callback run when it expires. */
#ifndef SHARD_S3ASDGFXWAIT_H
#define SHARD_S3ASDGFXWAIT_H

#include "common.h"

typedef struct AsdGfxWaitContext {
    /* 0x000 */ u8 unk000[0x11];
    /* 0x011 */ u8 waiting;
    /* 0x012 */ u8 unk012[0x15E];
    /* 0x170 */ void (*onTimeout)(void);
    /* 0x174 */ u8 unk174[4];
    /* 0x178 */ s64 timeout;       /* ticks, 0: no timeout */
} AsdGfxWaitContext;

#endif
