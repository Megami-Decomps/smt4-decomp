#include "common.h"

extern "C" {

struct FUN_00123ba2View {
    u8 unk00[0xc];
    s8 value;
};

s8 FUN_00123ba2(const FUN_00123ba2View *self)
{
    return self->value;
}

} /* extern "C" */
