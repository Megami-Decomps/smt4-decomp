#include "shard/Shard0041.h"

extern "C" {

typedef struct SlotReset {
    /* 0x00 */ u8 unk00;
    /* 0x01 */ u8 unk01[3];
    /* 0x04 */ u32 unk04;
    /* 0x08 */ u8 unk08;
    /* 0x09 */ u8 unk09[3];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ u8 unk10[4];
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u8 unk1C[4];
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
    /* 0x28 */ u32 unk28;
    /* 0x2C */ u8 unk2C[4];
    /* 0x30 */ u32 unk30;
    /* 0x34 */ u32 unk34;
    /* 0x38 */ u32 unk38;
    /* 0x3C */ u32 unk3C;
    /* 0x40 */ u32 unk40;
    /* 0x44 */ u32 unk44;
    /* 0x48 */ u32 unk48;
} SlotReset;

/* Resets the slot to its idle state (id 0xFF). */
SlotReset* slotReset(SlotReset *slot)
{
    slot->unk08 = 0xFF;
    slot->unk20 = 0x2010000;
    slot->unk00 = 0;
    slot->unk04 = 0;
    slot->unk0C = 0;
    slot->unk14 = 0;
    slot->unk18 = 0;
    slot->unk24 = 0;
    slot->unk28 = 0;
    slot->unk30 = 0;
    slot->unk34 = 0;
    slot->unk38 = 0;
    slot->unk3C = 0;
    slot->unk40 = 0;
    slot->unk44 = 0;
    slot->unk48 = 0;
    return slot;
}

} /* extern "C" */
