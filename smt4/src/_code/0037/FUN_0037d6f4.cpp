#include "common.h"

extern "C" {

struct FUN_0037d6f4View {
    u8 unk00[0x18];
    f32 value;
};

void FUN_0037d6f4(FUN_0037d6f4View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
