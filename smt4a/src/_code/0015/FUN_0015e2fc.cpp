#include "common.h"

extern "C" {

struct FUN_0015e2fcView {
    u8 unk00[0x48];
    f32 value;
};

void FUN_0015e2fc(FUN_0015e2fcView *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
