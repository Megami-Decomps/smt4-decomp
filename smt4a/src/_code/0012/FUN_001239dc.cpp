#include "common.h"

extern "C" {

struct FUN_001239dcView {
    u8 unk00[0xc0];
    u32 value;
};

u32 FUN_001239dc(const FUN_001239dcView *self)
{
    return self->value;
}

} /* extern "C" */
