/* The map's EPL slot table behind g_eplSlots (Apocalypse): 16 slots that each own a resource list
 * and a buffer. mapEplExt.h views the same block with its entries starting at the list pointer. */
#ifndef SHARD_W4_MATCH3_EPLSLOTS_H
#define SHARD_W4_MATCH3_EPLSLOTS_H

#include "common.h"
#include <stddef.h>

#define EPL_SLOT_COUNT 16

typedef struct EplSlot {
    union {
        /* 0x00 */ u8 unk00[0x58];
        struct {
            /* 0x00 */ u32 resources[18];
            /* 0x48 */ f32 parameters[4];
        } initialization;
    };
    /* 0x58 */ void *buffer;
    /* 0x5C */ void *list;
    /* 0x60 */ u8 loaded;
    /* 0x61 */ u8 unk61[3];
} EplSlot; /* 0x64 */

typedef struct EplSlots {
    /* 0x00 */ u8 unk00[0xC];
    /* 0x0C */ EplSlot slots[EPL_SLOT_COUNT];
} EplSlots;
typedef char EplSlotInitializationOffsetsCheck[
    offsetof(EplSlot, initialization.resources) == 0 &&
    offsetof(EplSlot, initialization.parameters) == 0x48 &&
    offsetof(EplSlot, buffer) == 0x58 && offsetof(EplSlot, list) == 0x5C &&
    sizeof(EplSlot) == 0x64 && sizeof(EplSlots) == 0x64C ? 1 : -1];

extern "C" EplSlots *g_eplSlots;

#endif
