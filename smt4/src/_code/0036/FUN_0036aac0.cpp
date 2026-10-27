#include "common.h"

extern "C" {

struct FUN_0036aac0View {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_0036aac0(const FUN_0036aac0View *self)
{
    return self->value;
}

} /* extern "C" */
