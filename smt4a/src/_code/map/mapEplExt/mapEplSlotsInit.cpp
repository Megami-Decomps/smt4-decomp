#include "common.h"
#include "AsdSDK/AsdDebug.h"

struct EplSlot {
    /* 0x00 */ u32 unk00[18];
    /* 0x48 */ f32 unk48[4];
    /* 0x58 */ u32 unk58;
    /* 0x5C */ u32 unk5C;
    /* 0x60 */ u8 unk60;
    /* 0x61 */ u8 padding[3];
};

struct EplSlots {
    /* 0x00 */ u8 unk00[12];
    /* 0x0C */ EplSlot unk0C[16];
};

extern "C" {
extern const char DAT_00531a18[];
extern EplSlots *g_eplSlots;

void *asdMemoryAllocTracked(s32 heap, s32 alignment, s32 flags,
                           u32 size, s32 fromFront);
void tripleClear(EplSlots *slots);

void mapEplSlotsInit(void)
{
    asdDebugTrace(DAT_00531a18, 82);

    EplSlots *slots = g_eplSlots = static_cast<EplSlots *>(
        asdMemoryAllocTracked(0x100, 0x100, 0, sizeof(EplSlots), 1));
    tripleClear(slots);

    for (s32 index = 0; index < 16; ++index) {
        EplSlot *slot = &slots->unk0C[index];
        slot->unk00[0] = 0;
        slot->unk00[1] = 0;
        slot->unk00[2] = 0;
        slot->unk00[3] = 0;
        slot->unk00[4] = 0;
        slot->unk00[5] = 0;
        slot->unk00[6] = 0;
        slot->unk00[7] = 0;
        slot->unk00[8] = 0;
        slot->unk00[9] = 0;
        slot->unk00[10] = 0;
        slot->unk00[11] = 0;
        slot->unk00[12] = 0;
        slot->unk00[13] = 0;
        slot->unk00[14] = 0;
        slot->unk00[15] = 0;
        slot->unk00[16] = 0;
        slot->unk00[17] = 0;
        slot->unk58 = 0;
        slot->unk5C = 0;
        slot->unk48[0] = 0.0f;
        slot->unk48[1] = 0.0f;
        slot->unk48[2] = 0.0f;
        slot->unk48[3] = 0.0f;
        slot->unk60 = 0;
    }
}
}
