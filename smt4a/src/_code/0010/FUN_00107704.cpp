#include "common.h"

extern "C" {

struct FUN_00107704View {
    u8 unk00[0xbc];
    u8 value;
};

u32 FUN_00107704(const FUN_00107704View *self)
{
    if (self->value == 3) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
