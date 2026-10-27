#include "common.h"

extern "C" {

struct FUN_00107714View {
    u8 unk00[0xbd];
    s8 value;
};

s8 FUN_00107714(const FUN_00107714View *self)
{
    return self->value;
}

} /* extern "C" */
