#include "common.h"

extern "C" {

struct FUN_0050c990Inner {
    u8 unk00[0x1];
    s8 value;
};

struct FUN_0050c990View {
    u8 unk00[0x8];
    FUN_0050c990Inner * inner;
};

s8 FUN_0050c990(const FUN_0050c990View *self)
{
    return self->inner->value;
}

} /* extern "C" */
