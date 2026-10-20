/* Tail call into the function that follows. */
#include "common.h"

extern "C" {

struct Obj001b4a74 {
    /* 0x000 */ u8 unk000[0x7e8];
    /* 0x7e8 */ u32 unk7e8;
    /* 0x7ec */ u8 rest[1];
};

void FUN_001b4a90(void *rest, u32 size, s32 value);

void FUN_001b4a74(Obj001b4a74 *o)
{
    o->unk7e8 = 0;
    FUN_001b4a90(o->rest + 0x100, 256, -1);
}

}
