#include "common.h"

extern "C" {

struct FUN_00107620View {
    u8 unk00[0xbc];
    u8 value;
};

u32 FUN_00107620(const FUN_00107620View *self)
{
    if (self->value == 0) {
        return 1;
    }
    return 0;
}

} /* extern "C" */
