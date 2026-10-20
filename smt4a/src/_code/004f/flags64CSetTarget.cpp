#include "shard/Shard004F.h"

extern "C" {

typedef struct Flags64C {
    /* 0x000 */ u8 unk000[0x58];
    /* 0x058 */ u8 block58[0x5F4];
    /* 0x64C */ u32 flags;
} Flags64C;

extern void FUN_001f5180(u8 *block, s32 a, s32 b, float x, float y);

void flags64CSetTarget(Flags64C *obj, float x, float y, float z)
{
    FUN_001f5180(obj->block58, (s16)(s32)z, 0, x, y);
    obj->flags = obj->flags | 0x400000;
}

} /* extern "C" */
