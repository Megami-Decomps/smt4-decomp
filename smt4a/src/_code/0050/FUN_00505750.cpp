#include "common.h"

extern "C" {

struct FUN_00505750View {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_00505750(const FUN_00505750View *self)
{
    return self->value;
}

} /* extern "C" */
