#ifndef BATTLE_BTLENTRYVOICE_H
#define BATTLE_BTLENTRYVOICE_H

#include "common.h"
#include <stddef.h>

/* Eligibility masks for the entry voice requests (0x573cc0). */
struct BtlEntryVoiceMasks {
    /* 0x00 */ u64 byListedId;
    /* 0x08 */ u64 selected;
};
typedef char BtlEntryVoiceMasksLayoutCheck[offsetof(BtlEntryVoiceMasks, selected) == 8 &&
    sizeof(BtlEntryVoiceMasks) == 16 ? 1 : -1];

extern "C" {
extern const BtlEntryVoiceMasks DAT_00573cc0;
void FUN_0015f490(u32 id, s32 kind, f32 scale, u32 argument, u32 variant);
} /* extern "C" */

#endif
