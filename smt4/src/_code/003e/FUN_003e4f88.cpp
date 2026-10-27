#include "common.h"

extern "C" {

struct FUN_003e4f88View {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_003e4f88(const FUN_003e4f88View *self)
{
    return self->value;
}

} /* extern "C" */
