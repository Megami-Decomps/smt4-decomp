#ifndef SMT4A_BATTLE_BTLPOSITIONEDREQUESTSA_H
#define SMT4A_BATTLE_BTLPOSITIONEDREQUESTSA_H

#include "common.h"

struct BtlUiA;

extern "C" {
/* Enqueue a request in the group at the given position, or return -1 on failure. */
u32 btlUiQueuePositionedRequest(BtlUiA *ui, u32 value, f32 x, f32 y, f32 z,
                 u8 first, u8 second, s32 enabled, u8 mode);

/* Place a request at the category's screen anchor plus the given pixel offsets. */
u32 btlUiQueueSlotPositionRequest(BtlUiA *ui, s32 category, u32 value, u8 first, u8 second,
                 s32 enabled, s32 x, s32 y);
}

#endif
