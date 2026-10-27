#include "common.h"

extern "C" {

struct FUN_0037d8c0View {
    u8 unk00[0x85];
    u8 value;
};

void FUN_0037d8c0(FUN_0037d8c0View *self, u8 value)
{
    self->value = value;
}

} /* extern "C" */
