#include "common.h"

extern "C" {

struct FUN_0012a0e0View {
    u8 unk00[0x4];
    u32 value;
};

void FUN_0012a0e0(FUN_0012a0e0View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
