#include "common.h"

extern "C" {

struct FUN_0036a798View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_0036a798(const FUN_0036a798View *self)
{
    return self->value;
}

} /* extern "C" */
