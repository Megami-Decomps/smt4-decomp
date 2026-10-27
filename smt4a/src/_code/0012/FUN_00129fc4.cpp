#include "common.h"

extern "C" {

struct FUN_00129fc4View {
    u8 unk00[0x4];
    u32 value;
};

void FUN_00129fc4(FUN_00129fc4View *self, u32 value)
{
    self->value = value;
}

} /* extern "C" */
