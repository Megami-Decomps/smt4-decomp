/* NON_MATCHING: Retail ldr r1, [pc, #136] differs from recovered ldr ip, [pc, #136]. */
#include "common.h"

// Private layout view for the fields initialized here.
struct Obj4207c0View {
    const void* unk00; // 0x00
    u8 unk04[0x98];    // 0x04
    u32 unk9C;        // 0x9C
    u32 unkA0;        // 0xA0
    u32 unkA4;        // 0xA4
    u32 unkA8;        // 0xA8
    u32 unkAC;        // 0xAC
    u8 unkB0;         // 0xB0
    u8 unkB1;         // 0xB1
    u8 unkB2;         // 0xB2
    u8 unkB3;         // 0xB3
    u32 unkB4;        // 0xB4
    u8 unkB8;         // 0xB8
    u8 unkB9;         // 0xB9
    u8 unkBA;         // 0xBA
    u8 unkBB;         // 0xBB
    u32 unkBC;        // 0xBC
};

extern "C" {
extern u8 _ZTV9Obj4207c0[];
extern Obj4207c0View* DAT_0056fcbc;

// Initializes the object and assigns special byte values to the first registered instance.
void FUN_00157fa0(Obj4207c0View* object)
{
    object->unk00 = _ZTV9Obj4207c0 + 0x18;
    object->unk9C = 0;
    object->unkA0 = 0;
    object->unkA4 = 0;
    object->unkA8 = 0;
    object->unkAC = 0;
    object->unkB0 = 0;
    object->unkB1 = 2;
    object->unkB2 = 0xFF;
    object->unkB3 = 0xFF;
    object->unkB4 = 0;
    object->unkB8 = 0;
    object->unkB9 = 2;
    object->unkBA = 0xFF;
    object->unkBB = 0xFF;
    object->unkBC = 0;

    if (DAT_0056fcbc != 0) {
        return;
    }

    object->unkB2 = 0x56;
    object->unkB3 = 0x59;
    object->unkBA = 0x5A;
    object->unkBB = 0x5C;
    DAT_0056fcbc = object;
}
}
