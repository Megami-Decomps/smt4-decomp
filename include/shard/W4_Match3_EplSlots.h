/* The map's EPL slot table behind g_eplSlots (Apocalypse): 16 slots that each own a resource list
 * and a buffer. mapEplExt.h views the same block with its entries starting at the list pointer. */
#ifndef SHARD_W4_MATCH3_EPLSLOTS_H
#define SHARD_W4_MATCH3_EPLSLOTS_H

#include "common.h"

#define EPL_SLOT_COUNT 16

typedef struct EplSlot {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ void *buffer;
    /* 0x5C */ void *list;
    /* 0x60 */ u8 loaded;
    /* 0x61 */ u8 unk61[3];
} EplSlot; /* 0x64 */

typedef struct EplSlots {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EplSlot slots[EPL_SLOT_COUNT];
} EplSlots;

extern "C" EplSlots *g_eplSlots;

#endif
