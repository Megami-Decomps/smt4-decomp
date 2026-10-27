#include "common.h"

extern "C" {

struct FUN_00508598View {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_00508598(const FUN_00508598View *self)
{
    return self->value;
}

} /* extern "C" */
