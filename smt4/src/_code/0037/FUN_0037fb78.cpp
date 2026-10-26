#include "common.h"

struct ObjFUN_0037fb78 {
    u8 unk00[0xCB];
    u8 flag;
    u8 unkCC[0x14];
    f32 value;
};

extern "C" {
void FUN_0037fb78(ObjFUN_0037fb78 *object, u8 flag, f32 value)
{
    object->value = value;
    object->flag = flag;
}
}
