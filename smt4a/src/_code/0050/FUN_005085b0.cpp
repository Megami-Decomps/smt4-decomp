#include "common.h"

extern "C" {

struct FUN_005085b0View {
    u8 unk00[0x18];
    u32 value;
};

u32 FUN_005085b0(const FUN_005085b0View *self)
{
    return self->value;
}

} /* extern "C" */
