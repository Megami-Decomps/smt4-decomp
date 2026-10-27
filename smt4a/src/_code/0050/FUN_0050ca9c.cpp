#include "common.h"

extern "C" {

struct FUN_0050ca9cInner {
    u8 unk00[0x7];
    u8 value;
};

struct FUN_0050ca9cView {
    u8 unk00[0x8];
    FUN_0050ca9cInner * inner;
};

u8 FUN_0050ca9c(const FUN_0050ca9cView *self)
{
    return self->inner->value;
}

} /* extern "C" */
