#include "common.h"

extern "C" {

struct FUN_00465c80View {
    u8 unk00[0xd];
    u8 value;
};

void FUN_00465c80(FUN_00465c80View *self)
{
    self->value = 1;
}

} /* extern "C" */
