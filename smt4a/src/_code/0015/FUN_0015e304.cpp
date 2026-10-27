#include "common.h"

extern "C" {

struct FUN_0015e304View {
    u8 unk00[0x50];
    f32 value;
};

void FUN_0015e304(FUN_0015e304View *self, f32 value)
{
    self->value = value;
}

} /* extern "C" */
