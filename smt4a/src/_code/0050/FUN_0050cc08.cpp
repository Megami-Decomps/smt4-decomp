#include "common.h"

extern "C" {

struct FUN_0050cc08Inner {
    u8 unk00[0x15];
    u8 value;
};

struct FUN_0050cc08View {
    u8 unk00[0x8];
    FUN_0050cc08Inner * inner;
};

u8 FUN_0050cc08(const FUN_0050cc08View *self)
{
    return self->inner->value;
}

} /* extern "C" */
