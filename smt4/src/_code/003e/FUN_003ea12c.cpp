#include "common.h"

extern "C" {

struct FUN_003ea12cInner {
    u8 unk00[0x7];
    u8 value;
};

struct FUN_003ea12cView {
    u8 unk00[0x8];
    FUN_003ea12cInner * inner;
};

u8 FUN_003ea12c(const FUN_003ea12cView *self)
{
    return self->inner->value;
}

} /* extern "C" */
