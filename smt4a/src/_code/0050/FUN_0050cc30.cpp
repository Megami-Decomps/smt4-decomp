#include "common.h"

extern "C" {

struct FUN_0050cc30Inner {
    u8 unk00[0x14];
    u8 value;
};

struct FUN_0050cc30View {
    u8 unk00[0x8];
    FUN_0050cc30Inner * inner;
};

u8 FUN_0050cc30(const FUN_0050cc30View *self)
{
    return self->inner->value;
}

} /* extern "C" */
