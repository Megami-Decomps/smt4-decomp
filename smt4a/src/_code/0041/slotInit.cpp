#include "shard/Shard0041.h"

extern "C" {

typedef struct SlotInit {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[8];
    /* 0x18 */ u32 unk18;
} SlotInit;

extern void FUN_00412854(SlotInit *slot);

void slotInit(SlotInit *slot, u32 a, u32 b, u32 c)
{
    slot->unk04 = a;
    slot->unk08 = 0;
    slot->unk18 = b;
    slot->unk0C = c;
    FUN_00412854(slot);
    slot->unk00 = 1;
}

} /* extern "C" */
