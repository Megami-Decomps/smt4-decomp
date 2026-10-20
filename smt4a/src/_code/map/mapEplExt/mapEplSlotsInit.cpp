#include "common.h"
#include "AsdSDK/AsdDebug.h"

extern "C" {

extern const char DAT_00531a18[]; /* mapEplExt.cpp: __FILE__ */

/* One slot (0x64 bytes); every field starts cleared. */
typedef struct EplSlot {
    /* 0x00 */ u32 word[0x12];
    /* 0x48 */ f32 value[4];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5c;
    /* 0x60 */ u8 active;
    /* 0x61 */ u8 pad61[3];
} EplSlot;

/* The slot table: a 12-byte header and 16 slots. */
typedef struct EplSlots {
    /* 0x00 */ u8 header[0xc];
    /* 0x0C */ EplSlot slot[16];
} EplSlots;

extern EplSlots *g_eplSlots;

void *asdMemoryAllocTracked(int heap, int alignClass, int unk08, u32 size, int fromFront);
void FUN_0014aa88(void);

/* Allocates the slot table and clears every slot. */
void mapEplSlotsInit(void)
{
    EplSlots *slots;
    int i;

    asdDebugTrace(DAT_00531a18, 82);
    slots = g_eplSlots = (EplSlots *)asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EplSlots), 1);
    FUN_0014aa88();
    for (i = 0; i < 16; i++) {
        EplSlot *slot = &slots->slot[i];
        slot->word[0] = 0;
        slot->word[1] = 0;
        slot->word[2] = 0;
        slot->word[3] = 0;
        slot->word[4] = 0;
        slot->word[5] = 0;
        slot->word[6] = 0;
        slot->word[7] = 0;
        slot->word[8] = 0;
        slot->word[9] = 0;
        slot->word[10] = 0;
        slot->word[11] = 0;
        slot->word[12] = 0;
        slot->word[13] = 0;
        slot->word[14] = 0;
        slot->word[15] = 0;
        slot->word[16] = 0;
        slot->word[17] = 0;
        slot->unk58 = 0;
        slot->unk5c = 0;
        slot->value[0] = 0.0f;
        slot->value[1] = 0.0f;
        slot->value[2] = 0.0f;
        slot->value[3] = 0.0f;
        slot->active = 0;
    }
}

} /* extern "C" */
