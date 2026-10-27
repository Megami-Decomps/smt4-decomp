#include "common.h"

extern "C" {

struct FUN_003ea020Inner {
    u8 unk00[0x1];
    s8 value;
};

struct FUN_003ea020View {
    u8 unk00[0x8];
    FUN_003ea020Inner * inner;
};

s8 FUN_003ea020(const FUN_003ea020View *self)
{
    return self->inner->value;
}

} /* extern "C" */
