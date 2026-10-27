#include "common.h"

extern "C" {

struct FUN_0012a1f8View {
    u8 unk00[0x4];
    u32 value;
};

void FUN_0012a1f8(FUN_0012a1f8View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
