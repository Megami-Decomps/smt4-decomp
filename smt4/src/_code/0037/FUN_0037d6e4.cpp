#include "common.h"

extern "C" {

struct FUN_0037d6e4View {
    u8 unk00[0x54];
    f32 value;
};

void FUN_0037d6e4(FUN_0037d6e4View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
