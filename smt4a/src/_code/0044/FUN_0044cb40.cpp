#include "common.h"

extern "C" {

struct FUN_0044cb40View {
    u8 unk00[0xc];
    u32 value;
};

u32 FUN_0044cb40(const FUN_0044cb40View *self)
{
    return self->value;
}

} /* extern "C" */
