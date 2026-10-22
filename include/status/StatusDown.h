/* Status-screen state machines and owned UI work. */
#ifndef STATUS_STATUSDOWN_H
#define STATUS_STATUSDOWN_H
#include "common.h"

typedef struct StatusDownState {
    /* 0x0000 */ u32 job;
    /* 0x0004 */ u8 unk0004[0x24];
    /* 0x0028 */ u8 timer[0x3D4];
    /* 0x03FC */ u8 unk3FC;
    /* 0x03FD */ u8 unk3FD[3];
    /* 0x0400 */ s32 state;
    /* 0x0404 */ s32 previousState;
    /* 0x0408 */ u32 unk408;
    /* 0x040C */ u32 unk40C;
    /* 0x0410 */ u8 unk410;
    /* 0x0411 */ u8 unk411;
    /* 0x0412 */ u8 unk412;
    /* 0x0413 */ u8 unk413[0x19];
    /* 0x042C */ u8 slots[0x29];
    /* 0x0455 */ u8 unk455[0x29];
    /* 0x047E */ u16 unk47E;
    /* 0x0480 */ u8 touchRegionCount;
    /* 0x0481 */ s8 unk481;
    /* 0x0482 */ u8 unk482[0x52];
    /* 0x04D4 */ u8 list[0x68];
    /* 0x053C */ u32 unk53C;
    /* 0x0540 */ u8 unk540[0x1D60];
    /* 0x22A0 */ u32 memorySlot;
    /* 0x22A4 */ u8 unk22A4[0xED];
    /* 0x2391 */ u8 unk2391;
    /* 0x2392 */ u8 unk2392;
} StatusDownState;

/* A state with its predecessor. */
typedef struct StatusDownTrack {
    /* 0x00 */ u32 state;
    /* 0x04 */ u32 previous;
} StatusDownTrack;

typedef struct StatusDownStateA {
    /* 0x0000 */ u8 unk0000[0xd4];
    /* 0x00d4 */ f32 panelEffectSpeed;
    /* 0x00d8 */ u8 unk00d8[0x114];
    /* 0x01ec */ f32 accentEffectSpeed;
    /* 0x01f0 */ u8 unk01f0[0x324];
    /* 0x0514 */ u8 unk514;
    /* 0x0515 */ u8 unk515[3];
    /* 0x0518 */ StatusDownTrack track;
    /* 0x0520 */ u32 unk520;
    /* 0x0524 */ u32 timer;
    /* 0x0528 */ u8 inventoryDirty;
    /* 0x0529 */ u8 unk529;
    /* 0x052a */ s8 active;
    /* 0x052b */ u8 unk052b[0x19];
    /* 0x0544 */ u8 slots[0x54];
    /* 0x0598 */ u16 unk598;
    /* 0x059A */ u8 touchRegionCount;
    /* 0x059b */ s8 mode;
    /* 0x059c */ u16 table59C[0x28];
    /* 0x05EC */ u8 unk5EC[4];
    /* 0x05F0 */ u8 unk5F0[0x64];
    /* 0x0654 */ s32 unk654;
    /* 0x0658 */ u8 unk658[4];
    /* 0x065c */ s32 selection;       /* -1 when none */
    /* 0x0660 */ union {
        u8 unk0660[0x1e3c];
        struct {
            /* 0x0660 */ u8 unk0660[0x8e8];
            union {
                u8 entryData[0x1400]; /* 0x0f48 */
                u16 entries[0x500][2]; /* demon ID, quantity */
            };
            s16 count;           /* 0x2348 */
            /* 0x234A */ s16 ownedCount;
            /* 0x234C */ s16 column;
            /* 0x234E */ s16 row;
            /* 0x2350 */ u32 unk2350;
            u8 controller[0x148]; /* 0x2354 */
        } inventory;
    };
    /* 0x249c */ u32 value249c;
    /* 0x24a0 */ s8 state;
    /* 0x24A1 */ u8 unk24A1[8];
    /* 0x24A9 */ u8 unk24A9;
    /* 0x24AA */ u8 unk24AA;
    /* 0x24AB */ u8 unk24AB[0xD9];
    /* 0x2584 */ u8 unk2584;
    /* 0x2585 */ u8 unk2585[3];
    /* 0x2588 */ u8 block2588[4];
    /* 0x258C */ u8 unk258C[0xC];
    /* 0x2598 */ u8 unk2598;
} StatusDownStateA;



/* Retail 32-bit layout invariants. */
typedef char StatusDownStateSizeCheck[sizeof(StatusDownState) == 0x2394 ? 1 : -1];
typedef char StatusDownStateASizeCheck[sizeof(StatusDownStateA) == 0x259C ? 1 : -1];

#endif
