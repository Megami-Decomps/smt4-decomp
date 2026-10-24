/* NON_MATCHING: retail loads width/height with one ldrd and holds the constants in a different register set (push {r4}); loop and arithmetic match. */
#include "common.h"

struct GridRecord {
    u8 unk00[0x10];
    s32 value; // 0x10
    u8 unk14[0x14];
};

struct GridShape {
    u8 unk00[0xc0];
    s32 width;  // 0xc0
    s32 height; // 0xc4
};

struct GridOwner {
    u8 unk00[4];
    s32 first;           // 0x04
    u8 unk08[0x10];
    GridRecord *records; // 0x18
    u8 unk1c[4];
    GridShape *shape;    // 0x20
};

extern "C" {

// Clear the value of every record in the block that `record` heads (width * height records per block).
void FUN_002fe2e8(GridOwner *owner, GridRecord *record)
{
    u32 count = owner->shape->width * owner->shape->height;
    if (count != 0) {
        GridRecord *block = &owner->records[(u32)((u8 *)record - (u8 *)owner->records) / sizeof(GridRecord) * count + owner->first];
        for (s32 i = 0; i < (s32)count; i++) {
            block[i].value = -1;
        }
    }
}

} /* extern "C" */
