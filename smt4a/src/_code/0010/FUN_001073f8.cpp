#include "common.h"

extern "C" {

struct FUN_001073f8View {
    u8 unk00[0xbc];
    u8 value;
};

u32 FUN_001073f8(const FUN_001073f8View *self)
{
    if (self->value == 2) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
