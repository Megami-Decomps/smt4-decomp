#include "shard/Shard0046.h"

extern "C" {

typedef struct Range18 {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u32 unk18;
    /* 0x1C */ u32 unk1C;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 unk24;
} Range18;

void range18Set(Range18 *obj, u32 a, u32 b)
{
    obj->unk18 = a;
    obj->unk1C = b;
    obj->unk20 = 0xFFFFFFFF;
    obj->unk24 = 0xFFFFFFFF;
}

} /* extern "C" */
