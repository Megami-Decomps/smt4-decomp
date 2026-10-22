/* Party-panel controllers and their embedded animation work. */
#ifndef UI_PARTYPANELSTATE_H
#define UI_PARTYPANELSTATE_H
#include "common.h"
#include "shard/W6_W6Match6_PartyPanel.h"
typedef struct TimerSlot {
    /* 0x00 */ u8 data[0x8C];
} TimerSlot;

typedef struct PartyPanelState {
    union {
        /* 0x0000 */ u8 unk0000[0x1C];
        struct {
            /* 0x0000 */ u8 unk0000prefix[0x18];
            /* 0x0018 */ u32 phase;
        } lifecycle;
    };
    /* 0x001C */ s32 sceneState;
    union {
        /* 0x0020 */ u8 unk0020[0xC];
        struct {
            /* 0x0020 */ u32 unk20;
            /* 0x0024 */ s32 previousState;
            /* 0x0028 */ u32 unk28;
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
    /* 0x066C */ u8 panelState;
    union {
        /* 0x066D */ u8 unk066D[0x5B];
        struct {
            /* 0x066D */ u8 unk066dPrefix[0xb];
            /* 0x0678 */ u8 activeSlots[4];
            /* 0x067C */ u8 unk067c[0x4c];
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
    /* 0x0738 */ union {
        u8 sortableEntries[0xC0];
        struct {
            /* 0x0738 */ u32 unk738;
            /* 0x073C */ PartyPanelEntry entries[0x18];
        } entryView;
    };
    /* 0x07FC */ u8 unk7FC[0x95C];
    /* 0x1158 */ u32 statusValue;
    /* 0x115C */ u8 unk115C[0x694];
    /* 0x17F0 */ u8 unk17F0;
} PartyPanelState;

typedef struct PartyPanelAnimationStateA {
    /* 0x000 */ u8 unk000[0xAC];
    /* 0x0AC */ f32 effectSpeed;
    /* 0x0B0 */ u8 unk0B0[0x784];
    /* 0x834 */ u8 mode;
    /* 0x835 */ u8 unk835[0x4F];
    /* 0x884 */ u16 unk884;
    /* 0x886 */ u8 unk886[0xA];
} PartyPanelAnimationStateA;

typedef struct PartyPanelStateA {
    /* 0x000 */ u8 unk000[0x1C];
    /* 0x01C */ s32 state;
    /* 0x020 */ u32 unk20;
    /* 0x024 */ u8 unk24[8];
    /* 0x02C */ u32 toggle;
    /* 0x030 */ u8 unk30[0xC];
    /* 0x03C */ s16 unk3C;
    /* 0x03E */ u8 unk3E[0x142];
    /* 0x180 */ PartyPanelAnimationStateA animation;
    /* 0xA10 */ u32 handlesA[4];
    /* 0xA20 */ u32 handlesB[0x18];
} PartyPanelStateA;

/* Retail 32-bit layout invariants. */
typedef char PartyPanelStateSizeCheck[sizeof(PartyPanelState) == 0x17F4 ? 1 : -1];
typedef char PartyPanelAnimationStateASizeCheck[sizeof(PartyPanelAnimationStateA) == 0x890 ? 1 : -1];
typedef char PartyPanelStateASizeCheck[sizeof(PartyPanelStateA) == 0xA80 ? 1 : -1];

#endif
