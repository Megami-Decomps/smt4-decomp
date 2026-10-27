#include "common.h"

extern "C" {

struct FUN_0037d6fcView {
    u8 unk00[0x4d];
    u8 value;
};

void FUN_0037d6fc(FUN_0037d6fcView *self, u8 value)
{
    self->value = value;
}

} /* extern "C" */
