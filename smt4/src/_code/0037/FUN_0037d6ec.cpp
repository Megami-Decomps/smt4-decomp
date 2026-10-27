#include "common.h"

extern "C" {

struct FUN_0037d6ecView {
    u8 unk00[0x58];
    f32 value;
};

void FUN_0037d6ec(FUN_0037d6ecView *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
