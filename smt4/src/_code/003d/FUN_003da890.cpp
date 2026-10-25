/* NON_MATCHING: instruction-for-instruction identical except register numbering (first loop keeps the slot base in r8 in retail, r5 here; idOnly loop swaps r0/r1) */
#include "common.h"
#include <stddef.h>
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
void asdMemFree(void *memory);
}

/* A 0x8c-byte resource slot: an id (0xff when free), an owned buffer and 0x80 bytes of data. */
struct ResourceSlot {
    /* 0x00 */ u8 id;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ void *buffer;
    /* 0x08 */ u8 data[0x80];
    /* 0x88 */ u8 flag;
    /* 0x89 */ u8 unk89[3];
};

struct ResourceSlots {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ u32 active;
    /* 0x1D00 */ ResourceSlot groupA[4];
    /* 0x1F30 */ ResourceSlot groupB[4];
    /* 0x2160 */ ResourceSlot groupC[4];
    /* 0x2390 */ ResourceSlot groupD[4];
    /* 0x25C0 */ ResourceSlot idOnly[11];
    /* 0x2BC4 */ ResourceSlot groupE[2];
    /* 0x2CDC */ ResourceSlot groupF[5];
    /* 0x2F98 */ u8 unk2F98[4];
    /* 0x2F9C */ ResourceSlot single0;
    /* 0x3028 */ u8 unk3028[0x48];
    /* 0x3070 */ ResourceSlot groupG[3];
    /* 0x3214 */ u8 unk3214[4];
    /* 0x3218 */ ResourceSlot single1;
};

typedef char ResourceSlotSizeCheck[sizeof(ResourceSlot) == 0x8C ? 1 : -1];
typedef char ResourceSlotsOffsetCheck[offsetof(ResourceSlots, single0) == 0x2F9C &&
    offsetof(ResourceSlots, groupG) == 0x3070 && offsetof(ResourceSlots, single1) == 0x3218 ? 1 : -1];

static inline void resetSlot(ResourceSlot *slot)
{
    slot->id = 0xFF;
    memClear(slot->data, sizeof(slot->data));
    if (slot->buffer != NULL) {
        asdMemFree(slot->buffer);
        slot->buffer = NULL;
    }
    slot->flag = 0;
}

extern "C" {
/* Releases every resource slot of the work area and marks them free. */
void FUN_003da890(ResourceSlots *work)
{
    work->active = 0;
    for (s32 i = 0; i < 4; i++) {
        resetSlot(&work->groupA[i]);
        resetSlot(&work->groupB[i]);
        resetSlot(&work->groupC[i]);
        resetSlot(&work->groupD[i]);
    }
    for (s32 i = 0; i < 2; i++) {
        resetSlot(&work->groupE[i]);
    }
    for (s32 i = 0; i < 5; i++) {
        resetSlot(&work->groupF[i]);
    }
    for (s32 i = 0; i < 3; i++) {
        resetSlot(&work->groupG[i]);
    }
    resetSlot(&work->single0);
    resetSlot(&work->single1);
    for (s32 i = 0; i < 11; i++) {
        work->idOnly[i].id = 0xFF;
    }
}
}
