#include "common.h"

extern "C" {

struct FUN_003e5ca8View {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_003e5ca8(const FUN_003e5ca8View *self)
{
    return self->value;
}

} /* extern "C" */
