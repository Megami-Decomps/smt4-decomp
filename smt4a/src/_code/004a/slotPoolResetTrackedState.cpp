#include "common.h"

struct ResettablePoolSlot {
    u16 unk00;       // 0x00
    u8 first;        // 0x02
    u8 second;       // 0x03
    u8 third;        // 0x04
    u8 unk05;        // 0x05
    u16 unk06;       // 0x06
    u8 unk08[4];     // 0x08
    u16 unk0c;       // 0x0c
    u8 unk0e[2];     // 0x0e
    u16 unk10;       // 0x10
    u8 unk12[2];     // 0x12
    u16 unk14;       // 0x14
    u8 unk16[6];     // 0x16
    u32 unk1c;       // 0x1c
};

struct ResettablePool {
    u16 count;                   // 0x0000
    u16 unk0002;                 // 0x0002
    ResettablePoolSlot slots[1280]; // 0x0004
    u8 selected;                 // 0xa004
    u8 unka005;                  // 0xa005
    u16 capacity;                // 0xa006
    u16 used;                    // 0xa008
};

// Reset the pool header and the tracked fields of each slot, preserving reserved bytes.
extern "C" void slotPoolResetTrackedState(ResettablePool* pool)
{
    pool->selected = 0xff;
    pool->count = 0;
    pool->capacity = 1280;
    pool->used = 0;
    for (s32 index = 0; index < 1280; ++index) {
        ResettablePoolSlot* slot = &pool->slots[index];
        slot->unk00 = 0;
        slot->first = 0;
        slot->unk0c = 0;
        slot->second = 0;
        slot->third = 0;
        slot->unk06 = 0;
        slot->unk10 = 0;
        slot->unk14 = 0;
        slot->unk1c = 0;
    }
}
