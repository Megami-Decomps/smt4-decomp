#include "common.h"

struct ObjFUN_00157ac0 {
    u8 unk00[0x28];
    f32 value28;
    u8 flag2C;
    u8 unk2D[0xB];
    f32 table[1];
};

extern "C" {
void FUN_00157ac0(ObjFUN_00157ac0 *object, s32 index, f32 value)
{
    object->table[index] = value;
}
}
