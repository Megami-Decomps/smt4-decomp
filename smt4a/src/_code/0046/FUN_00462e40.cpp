#include "common.h"

extern "C" {

struct FUN_00462e40View {
    u8 unk00[0xd];
    u8 value;
};

void FUN_00462e40(FUN_00462e40View *self)
{
    self->value = 1;
}

} /* extern "C" */
