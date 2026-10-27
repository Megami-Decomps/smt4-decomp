#include "common.h"

extern "C" {

struct FUN_003e864cView {
    u8 unk00[0x45e];
    s8 value;
};

s8 FUN_003e864c(const FUN_003e864cView *self)
{
    return self->value;
}

} /* extern "C" */
