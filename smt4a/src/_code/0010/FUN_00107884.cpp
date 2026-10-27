#include "common.h"

extern "C" {

struct FUN_00107884View {
    u8 unk00[0xb8];
    u32 value;
};

u32 FUN_00107884(const FUN_00107884View *self)
{
    return self->value;
}

} /* extern "C" */
