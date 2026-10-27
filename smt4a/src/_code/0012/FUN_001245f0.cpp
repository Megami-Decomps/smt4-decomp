#include "common.h"

extern "C" {

struct FUN_001245f0View {
    u8 unk00[0x4];
    u32 value;
};

u32 FUN_001245f0(const FUN_001245f0View *self)
{
    return self->value;
}

} /* extern "C" */
