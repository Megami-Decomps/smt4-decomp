#include "common.h"

extern "C" {

struct FUN_005061fcView {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_005061fc(const FUN_005061fcView *self)
{
    return self->value;
}

} /* extern "C" */
