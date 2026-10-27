#include "common.h"

extern "C" {

struct FUN_001077f8View {
    u8 unk00[0xb4];
    u32 value;
};

void FUN_001077f8(FUN_001077f8View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
