#include "common.h"

extern "C" {

struct FUN_00461c74View {
    u8 unk00[0x104];
    f32 value;
};

void FUN_00461c74(FUN_00461c74View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
