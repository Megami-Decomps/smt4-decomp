#include "common.h"

extern "C" {

struct FUN_003ea298Inner {
    u8 unk00[0x15];
    u8 value;
};

struct FUN_003ea298View {
    u8 unk00[0x8];
    FUN_003ea298Inner * inner;
};

u8 FUN_003ea298(const FUN_003ea298View *self)
{
    return self->inner->value;
}

} /* extern "C" */
