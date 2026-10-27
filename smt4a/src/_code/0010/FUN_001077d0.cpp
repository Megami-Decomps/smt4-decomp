#include "common.h"

extern "C" {

struct FUN_001077d0View {
    u8 unk00[0xb4];
    u32 value;
};

u32 FUN_001077d0(const FUN_001077d0View *self)
{
    return self->value;
}

} /* extern "C" */
