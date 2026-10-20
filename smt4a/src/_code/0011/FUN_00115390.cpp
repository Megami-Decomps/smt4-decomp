#include "common.h"

extern "C" {

typedef struct CountHolder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ s16 count;
} CountHolder;

/* Returns 1 when `count` is zero. */
u32 FUN_00115390(CountHolder *object)
{
    if (object->count != 0) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
