#include "common.h"

extern "C" {

struct FUN_0012968cView {
    u8 unk00[0x4];
    u32 value;
};

void FUN_0012968c(FUN_0012968cView *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
