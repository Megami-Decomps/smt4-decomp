#include "common.h"

extern "C" {

struct FUN_003e4f60View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_003e4f60(const FUN_003e4f60View *self)
{
    return self->value;
}

} /* extern "C" */
