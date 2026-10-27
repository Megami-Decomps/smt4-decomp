#include "common.h"

extern "C" {

struct FUN_0012a28cView {
    u8 unk00[0x4];
    u32 value;
};

void FUN_0012a28c(FUN_0012a28cView *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
