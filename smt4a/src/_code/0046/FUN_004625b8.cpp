#include "common.h"

extern "C" {

struct FUN_004625b8View {
    u8 unk00[0x8];
    f32 value;
};

void FUN_004625b8(FUN_004625b8View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
