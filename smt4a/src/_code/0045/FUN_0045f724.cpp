#include "common.h"

struct ObjFUN_0045f724 {
    u8 unk00[0xC8];
    f32 value;
};

extern "C" {
void FUN_0045f724(ObjFUN_0045f724 *object, f32 value)
{
    if (value < 0.0f) {
        value = 0.0f;
    }
    object->value = value;
}
}
