#include "common.h"

extern "C" {

struct FUN_003e6134View {
    u8 unk00[0x44];
    u32 value;
};

u32 FUN_003e6134(const FUN_003e6134View *self)
{
    return self->value;
}

} /* extern "C" */
