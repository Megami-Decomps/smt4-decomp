#include "common.h"

extern "C" {

struct FUN_003ea2c0Inner {
    u8 unk00[0x14];
    u8 value;
};

struct FUN_003ea2c0View {
    u8 unk00[0x8];
    FUN_003ea2c0Inner * inner;
};

u8 FUN_003ea2c0(const FUN_003ea2c0View *self)
{
    return self->inner->value;
}

} /* extern "C" */
