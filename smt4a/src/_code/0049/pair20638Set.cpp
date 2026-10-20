#include "shard/Shard0049.h"

extern "C" {

typedef struct Pair20638 {
    /* 0x00000 */ u8 unk00000[0x20638];
    /* 0x20638 */ u32 unk20638;
    /* 0x2063C */ u32 unk2063C;
} Pair20638;

void pair20638Set(Pair20638 *obj, u32 unused, u32 a, u32 b)
{
    obj->unk20638 = a;
    obj->unk2063C = b;
}

} /* extern "C" */
