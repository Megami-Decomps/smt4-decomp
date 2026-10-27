#include "common.h"

extern "C" {

struct FUN_00507d90View {
    u8 unk00[0x44];
    u32 value;
};

u32 FUN_00507d90(const FUN_00507d90View *self)
{
    return self->value;
}

} /* extern "C" */
