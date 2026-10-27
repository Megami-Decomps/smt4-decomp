#include "common.h"

extern "C" {

struct FUN_003e44dcView {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_003e44dc(const FUN_003e44dcView *self)
{
    return self->value;
}

} /* extern "C" */
