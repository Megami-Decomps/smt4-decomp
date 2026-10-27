#include "common.h"

extern "C" {

struct FUN_001239d6View {
    u8 unk00[0xbc];
    u8 value;
};

u8 FUN_001239d6(const FUN_001239d6View *self)
{
    return self->value;
}

} /* extern "C" */
