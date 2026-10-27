#include "common.h"

struct UniformContext;

struct Float4View {
    f32 values[4];
};

struct FUN_00409bc8_ObjectView {
    u8 unk0[0x530];             // +0x0000
    UniformContext *unk530;    // +0x0530
    u8 unk534[0xCA4];          // +0x0534
    Float4View unk11D8;        // +0x11D8
    s8 unk11E8;                // +0x11E8
};

extern "C" void FUN_0019f828(UniformContext *context, const u32 values[4]);

// Copy and submit changed four-float data, then clear the forced-update flag.
extern "C" void FUN_00409bc8(FUN_00409bc8_ObjectView* object,
                              const Float4View* values)
{
    if (object->unk11E8 != 0 ||
        values->values[0] != object->unk11D8.values[0] ||
        values->values[1] != object->unk11D8.values[1] ||
        values->values[2] != object->unk11D8.values[2] ||
        values->values[3] != object->unk11D8.values[3]) {
        f32 *stored = object->unk11D8.values;
        object->unk11D8 = *values;
        FUN_0019f828(object->unk530, reinterpret_cast<const u32 *>(stored));
    }
    object->unk11E8 = 0;
}
