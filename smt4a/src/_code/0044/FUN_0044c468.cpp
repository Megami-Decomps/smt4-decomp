#include "common.h"

extern "C" {

struct FUN_0044c468View {
    u8 unk00[0x1c];
    u32 value;
};

u32 FUN_0044c468(const FUN_0044c468View *self)
{
    return self->value;
}

} /* extern "C" */
