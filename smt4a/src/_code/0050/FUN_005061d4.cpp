#include "common.h"

extern "C" {

struct FUN_005061d4View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_005061d4(const FUN_005061d4View *self)
{
    return self->value;
}

} /* extern "C" */
