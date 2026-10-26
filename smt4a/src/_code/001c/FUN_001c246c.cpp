#include "common.h"

struct ObjFUN_001c246c {
    u8 unk00[0x28];
    f32 value28;
    u8 flag2C;
    u8 unk2D[0xB];
    f32 table[1];
};

extern "C" {
void FUN_001c246c(ObjFUN_001c246c *object, u8 flag, f32 value)
{
    object->value28 = value; object->flag2C = flag;
}
}
