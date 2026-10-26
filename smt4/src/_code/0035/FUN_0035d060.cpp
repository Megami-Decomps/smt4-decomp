#include "common.h"

struct CountHolder {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ s32 count;
};

extern "C" {

/* Handler: answers 3 when the count is zero, otherwise 1. */
u32 FUN_0035d060(const CountHolder *self)
{
    if (self->count == 0) {
        return 3;
    }
    return 1;
}

} /* extern "C" */
