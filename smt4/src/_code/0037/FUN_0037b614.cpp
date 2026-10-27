#include "common.h"

extern "C" {

struct FUN_0037b614View {
    u8 unk00[0x4];
    u32 value;
};

void FUN_0037b614(FUN_0037b614View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
