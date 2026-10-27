#include "common.h"

extern "C" {

struct FUN_00505130View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_00505130(const FUN_00505130View *self)
{
    return self->value;
}

} /* extern "C" */
