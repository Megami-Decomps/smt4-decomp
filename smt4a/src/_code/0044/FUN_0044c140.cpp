#include "common.h"

extern "C" {

struct FUN_0044c140View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_0044c140(const FUN_0044c140View *self)
{
    return self->value;
}

} /* extern "C" */
