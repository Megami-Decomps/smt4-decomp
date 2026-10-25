/* Map-interface start delay and per-transition timer values. */
#ifndef MAP_MAPIFTIMER_H
#define MAP_MAPIFTIMER_H
#include "common.h"
#include <stddef.h>
typedef struct MapIfTimer {
    /* 0x00 */ s32 state;
    /* 0x04 */ s32 frames;
    /* 0x08 */ s32 unk08;
    /* 0x0C */ s32 unk0C;
    /* 0x10 */ u8 unk10[4];
    union {
        /* 0x14 */ u32 unk14;
        /* 0x14 */ const char *hintLabel;
    };
} MapIfTimer;
extern "C" MapIfTimer *g_mapIfTimer;

/* Retail 32-bit layout invariants. */
typedef char MapIfTimerSizeCheck[sizeof(MapIfTimer) == 0x18 ? 1 : -1];
struct MapHintRecord {
    /* 0x00 */ u32 message;
    /* 0x04 */ char label[0x5C];
};
typedef char MapHintRecordOffsets[sizeof(MapHintRecord) == 0x60 &&
    offsetof(MapHintRecord, label) == 4 &&
    offsetof(MapIfTimer, hintLabel) == 0x14 && sizeof(MapIfTimer) == 0x18 ? 1 : -1];

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
s32 clockGetSecondsSinceStart(void);
#ifdef __cplusplus
}
#endif

#endif
