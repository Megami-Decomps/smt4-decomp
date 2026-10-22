#include "common.h"

struct Obj422540Value {
    u8 unk00[0x14];
    s32 value; // 0x14
};

// Store a supplied byte when the request is enabled.
extern "C" s32 _ZN9Obj4225406decodeEPKhj(Obj422540Value *object, const u8 *value, s32 enabled)
{
    if (enabled == 0)
        return -1;
    object->value = *value;
    return 1;
}
