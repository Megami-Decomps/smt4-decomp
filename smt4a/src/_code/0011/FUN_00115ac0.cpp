#include "common.h"

extern "C" {

struct FUN_00115ac0View {
    u8 unk00[0x20];
    u32 value;
};

u32 FUN_00115ac0(const FUN_00115ac0View *self)
{
    return self->value;
}

} /* extern "C" */
