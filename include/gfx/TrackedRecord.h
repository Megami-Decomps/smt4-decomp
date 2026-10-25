#ifndef GFX_TRACKEDRECORD_H
#define GFX_TRACKEDRECORD_H

#include "shard/Shard0031.h"

struct TrackedRecordOwner {
    /* 0x00 */ u8 mode;
    /* 0x01 */ u8 unk01[0xF];
    /* 0x10 */ FlaggedEntry record;
};

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void flaggedEntrySetValueA(FlaggedEntry *entry, s32 value);
#ifdef __cplusplus
}
#endif

#endif
