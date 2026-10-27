#include "common.h"

extern "C" {

struct FUN_0037dd34View {
    u8 unk00[0x10];
    f32 value;
};

void FUN_0037dd34(FUN_0037dd34View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
