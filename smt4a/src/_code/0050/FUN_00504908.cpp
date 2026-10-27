#include "common.h"

extern "C" {

struct FUN_00504908View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_00504908(const FUN_00504908View *self)
{
    return self->value;
}

} /* extern "C" */
