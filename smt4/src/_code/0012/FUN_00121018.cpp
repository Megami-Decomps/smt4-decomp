#include "common.h"

extern "C" {

struct FUN_00121018View {
    u8 unk00[0x48];
    f32 value;
};

void FUN_00121018(FUN_00121018View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
