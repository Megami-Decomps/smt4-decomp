#include "common.h"

extern "C" {

struct FUN_0037d858View {
    u8 unk00[0x14];
    f32 value;
};

void FUN_0037d858(FUN_0037d858View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
