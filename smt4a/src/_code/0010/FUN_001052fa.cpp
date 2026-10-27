#include "common.h"

extern "C" {

struct FUN_001052faView {
    u8 unk00[0x3c];
    u32 value;
};

u32 FUN_001052fa(const FUN_001052faView *self)
{
    if (self->value == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
