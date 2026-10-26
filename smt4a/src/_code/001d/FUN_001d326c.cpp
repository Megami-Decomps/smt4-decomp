#include "common.h"

struct ObjFUN_001d326c {
    u8 unk00[0x13E];
    u8 flag13E;
    u8 unk13F[0x14];
    f32 value154;
};

extern "C" {
void FUN_001d326c(ObjFUN_001d326c *object, u8 flag, f32 value)
{
    object->value154 = value;
    object->flag13E = flag;
}
}
