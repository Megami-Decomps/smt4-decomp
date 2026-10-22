#include "common.h"

struct Obj420a2cValues {
    u8 unk00[0x10];
    s32 values[1]; // 0x10
};

// Return the indexed value.
extern "C" s32 _ZNK9Obj420a2c8getValueEj(const Obj420a2cValues *object, u32 index)
{
    return object->values[index];
}
