/* NON_MATCHING: width/height now load with one ldrd as in retail; retail holds the 0xcccccccd divisor in r4 (push {r4}) and reads records before first, the build keeps it in ip. */
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
void FUN_0024b7bc(GridOwner *owner, GridRecord *record)
{
    u32 count = owner->shape->height * owner->shape->width;
    if (count != 0) {
        GridRecord *block = &owner->records[(u32)((u8 *)record - (u8 *)owner->records) / sizeof(GridRecord) * count + owner->first];
        for (s32 i = 0; i < (s32)count; i++) {
            block[i].value = -1;
        }
    }
}

} /* extern "C" */
