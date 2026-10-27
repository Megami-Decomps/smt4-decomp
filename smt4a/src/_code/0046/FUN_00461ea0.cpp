#include "common.h"

extern "C" {

struct FUN_00461ea0View {
    u8 unk00[0x14];
    f32 value;
};

void FUN_00461ea0(FUN_00461ea0View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
