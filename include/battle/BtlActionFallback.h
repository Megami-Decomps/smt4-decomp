#ifndef BATTLE_BTL_ACTION_FALLBACK_H
#define BATTLE_BTL_ACTION_FALLBACK_H

#include "common.h"
#include <stddef.h>

/* The default actions consulted when the resident action table is unavailable. */
struct BtlActionFallback {
    /* 0x00 */ u16 id;
    /* 0x02 */ u8 unk02[2];
    /* 0x04 */ u32 sound;
    /* 0x08 */ u32 action;
    /* 0x0C */ u16 index;
    /* 0x0E */ u8 unk0E[2];
};

enum { BTL_FALLBACK_ACTION_COUNT = 3 };
typedef char BtlActionFallbackLayoutCheck[sizeof(BtlActionFallback) == 0x10 &&
    offsetof(BtlActionFallback, action) == 0x8 && offsetof(BtlActionFallback, index) == 0xC ? 1 : -1];

extern "C" {
extern const BtlActionFallback g_jyoucyuRowTable[BTL_FALLBACK_ACTION_COUNT];
extern const BtlActionFallback DAT_0057a4c4[BTL_FALLBACK_ACTION_COUNT];
}

#endif
