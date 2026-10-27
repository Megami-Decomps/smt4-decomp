#include "common.h"

extern "C" {

struct FUN_0010903eView {
    u8 unk00[0xbc];
    u8 value;
};

u32 FUN_0010903e(const FUN_0010903eView *self)
{
    if (self->value == 4) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
