/* The state block at 0x43e310. */
#ifndef SHARD_SYS43E310_H
#define SHARD_SYS43E310_H

#include "common.h"
#include <stddef.h>

typedef struct Sys43e310 {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ s8 unk01; /* when set, the request that runs saveLoadRequestUpdate skips its script */
    /* 0x02 */ s8 unk02;
    /* 0x03 */ s8 unk03;
    /* 0x04 */ struct SaveLoadThreadRequest *request;
    /* 0x08 */ const char *iconPath; /* icon used when recreating extra save data */
    /* 0x0C */ union {
        s32 scriptEntry; /* -1: do not run an entry */
        s32 result;      /* completion result when the request runs a save worker */
    };
} Sys43e310;
typedef char Sys43e310LayoutCheck[sizeof(Sys43e310) == 0x10 &&
    offsetof(Sys43e310, request) == 0x04 && offsetof(Sys43e310, iconPath) == 0x08 &&
    offsetof(Sys43e310, scriptEntry) == 0x0C ? 1 : -1];

extern Sys43e310 g_saveLoadThread;

#endif
