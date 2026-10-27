#include "common.h"

extern "C" {

struct FUN_00461d10View {
    u8 unk00[0x18];
    f32 value;
};

void FUN_00461d10(FUN_00461d10View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
