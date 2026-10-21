/* The status-down screen's object (smt4a g_statusDown, 0x588fe8): its state machine and timer. */
#ifndef SHARD_W4_W4MATCH5_STATUSDOWN_H
#define SHARD_W4_W4MATCH5_STATUSDOWN_H

#include "common.h"

/* A state with its predecessor. */
typedef struct StateTrack {
    u32 state;
    u32 previous;
} StateTrack;

typedef struct StatusDown {
    /* 0x0000 */ u8 unk0000[0xd4];
    /* 0x00d4 */ f32 panelEffectSpeed;
    /* 0x00d8 */ u8 unk00d8[0x114];
    /* 0x01ec */ f32 accentEffectSpeed;
    /* 0x01f0 */ u8 unk01f0[0x328];
    /* 0x0518 */ StateTrack track;
    /* 0x0520 */ u8 unk0520[4];
    /* 0x0524 */ u32 timer;
    /* 0x0528 */ union {
        u8 unk0528[2];
        u8 inventoryDirty;
    };
    /* 0x052a */ s8 active;
    /* 0x052b */ u8 unk052b[0x70];
    /* 0x059b */ s8 mode;
    /* 0x059c */ u8 unk059c[0xc0];
    /* 0x065c */ s32 selection;       /* -1 when none */
    /* 0x0660 */ union {
        u8 unk0660[0x1e3c];
        struct {
            u8 unk0660[0x8e8];
            union {
                u8 entryData[0x1400]; /* 0x0f48 */
                u16 entries[0x500][2]; /* demon ID, quantity */
            };
            s16 count;           /* 0x2348 */
            s16 ownedCount;
            s16 column;
            s16 row;
            u32 unk2350;
            u8 controller[0x148]; /* 0x2354 */
        } inventory;
    };
    /* 0x249c */ u32 value249c;
    /* 0x24a0 */ s8 state;
} StatusDown;

extern StatusDown *g_statusDown;

#endif
