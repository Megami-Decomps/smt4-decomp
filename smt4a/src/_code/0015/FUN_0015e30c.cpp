#include "common.h"

extern "C" {

struct FUN_0015e30cView {
    u8 unk00[0x4c];
    f32 value;
};

void FUN_0015e30c(FUN_0015e30cView *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
