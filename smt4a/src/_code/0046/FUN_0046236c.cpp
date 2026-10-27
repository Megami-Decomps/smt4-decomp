#include "common.h"

extern "C" {

struct FUN_0046236cView {
    u8 unk00[0x10];
    f32 value;
};

void FUN_0046236c(FUN_0046236cView *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
