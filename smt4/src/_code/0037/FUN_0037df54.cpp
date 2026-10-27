#include "common.h"

extern "C" {

struct FUN_0037df54View {
    u8 unk00[0x8];
    f32 value;
};

void FUN_0037df54(FUN_0037df54View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
