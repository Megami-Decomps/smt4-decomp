#include "common.h"

extern "C" {

struct FUN_003e3f44View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_003e3f44(const FUN_003e3f44View *self)
{
    return self->value;
}

} /* extern "C" */
