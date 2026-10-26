#include "common.h"

struct ObjFUN_00157ab4 {
    u8 unk00[0x28];
    f32 value28;
    u8 flag2C;
    u8 unk2D[0xB];
    f32 table[1];
};

extern "C" {
void FUN_00157ab4(ObjFUN_00157ab4 *object, u8 flag, f32 value)
{
    object->value28 = value; object->flag2C = flag;
}
}
