#include "common.h"

extern "C" {

struct FUN_0037d648View {
    u8 unk00[0x98];
    f32 value;
};

void FUN_0037d648(FUN_0037d648View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
