#ifndef SHARD_W5_W5MATCH6_CALLBACKCONTROLLER_H
#define SHARD_W5_W5MATCH6_CALLBACKCONTROLLER_H

#include "common.h"
#include <stddef.h>

/* The work area g_callbackController.work points at. */
typedef struct CallbackControllerWork {
    /* 0x000 */ u32 job;
    /* 0x004 */ u8 unk004[4];
    /* 0x008 */ void *bufferA;
    /* 0x00C */ void *bufferB;
    /* 0x010 */ u8 unk010[0x78];
    /* 0x088 */ void *slots[3];       /* memory slots freed with asdMemFreeSlot */
    /* 0x094 */ u8 unk094[0x184];
    /* 0x218 */ u16 touchRegionCount;
} CallbackControllerWork;

typedef char CallbackControllerWorkOffsets[offsetof(CallbackControllerWork, slots) == 0x88 &&
    offsetof(CallbackControllerWork, touchRegionCount) == 0x218 ? 1 : -1];

struct CallbackController {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *work;
};
extern "C" CallbackController g_callbackController;

#endif
