#include "common.h"

extern "C" {

struct FUN_00124252View {
    u8 unk00[0x148];
    s8 value;
};

s8 FUN_00124252(const FUN_00124252View *self)
{
    return self->value;
}

} /* extern "C" */
