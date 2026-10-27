#include "common.h"

extern "C" {

struct FUN_0012a168View {
    u8 unk00[0x4];
    u32 value;
};

void FUN_0012a168(FUN_0012a168View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
