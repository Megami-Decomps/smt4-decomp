/* The scene block held in g_partyPanel: four character timers at 0x298, a title timer at 0x4C8 and the state byte at 0x66C. */
#ifndef SHARD_SCENE43DCF0_H
#define SHARD_SCENE43DCF0_H

#include "common.h"
#include "shard/W6_W6Match6_PartyPanel.h"

typedef struct TimerSlot {
    u8 data[0x8C];
} TimerSlot;

typedef struct Scene43dcf0 {
    union {
        /* 0x0000 */ u8 unk0000[0x1C];
        struct {
            u8 unk0000prefix[0x18];
            /* 0x0018 */ u32 phase;
        } lifecycle;
    };
    /* 0x001C */ s32 unk1C;
    union {
        /* 0x0020 */ u8 unk0020[0xC];
        struct {
            u32 unk20;
            /* 0x0024 */ s32 previousState;
            u32 unk28;
        } history;
    };
    /* 0x002C */ u32 unk2C;
    /* 0x0030 */ u8 unk0030[0x4];
    /* 0x0034 */ u8 unk34;
    /* 0x0035 */ u8 unk35;
    /* 0x0036 */ u8 unk0036[0xC];
    /* 0x0042 */ u8 unk42;
    /* 0x0043 */ u8 unk0043[0x13D];
    /* 0x0180 */ u8 timerC[1];
    /* 0x0181 */ u8 unk0181[0xab];
    /* 0x022C */ f32 effectSpeed;
    /* 0x0230 */ u8 unk0230[0x68];
    /* 0x0298 */ TimerSlot timers[4];
    /* 0x04C8 */ TimerSlot timerB;
    /* 0x0554 */ u8 unk0554[0x118];
    /* 0x066C */ u8 state;
    union {
        /* 0x066D */ u8 unk066D[0x5B];
        struct {
            u8 unk066dPrefix[0xb];
            /* 0x0678 */ u8 activeSlots[4];
            u8 unk067c[0x4c];
        } availability;
    };
    union {
        /* 0x06C8 */ u32 unk6C8[4];
        PartyPanelWidget *characters[4];
    };
    union {
        /* 0x06D8 */ u32 unk6D8[0x18];
        PartyPanelWidget *demons[0x18];
    };
    /* 0x0738 */ u32 unk738;
    /* 0x073C */ PartyPanelEntry entries[0x18];
} Scene43dcf0;

extern Scene43dcf0 *g_partyPanel;

#endif
