#include "common.h"

extern "C" {

struct FUN_003e613cView {
    u8 unk00[0x556];
    s8 value;
};

s8 FUN_003e613c(const FUN_003e613cView *self)
{
    return self->value;
}

} /* extern "C" */
