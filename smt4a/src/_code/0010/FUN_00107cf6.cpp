#include "common.h"

extern "C" {

struct FUN_00107cf6View {
    u8 unk00[0xbd];
    u8 value;
};

void FUN_00107cf6(FUN_00107cf6View *self)
{
    self->value = 0;
}

} /* extern "C" */
