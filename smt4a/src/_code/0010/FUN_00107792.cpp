#include "common.h"

extern "C" {

struct FUN_00107792View {
    u8 unk00[0xbd];
    u8 value;
};

void FUN_00107792(FUN_00107792View *self)
{
    self->value = 1;
}

} /* extern "C" */
