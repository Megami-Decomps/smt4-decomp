#include "common.h"

extern "C" {

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ u8 kind;
} Holder;

/* Returns 1 when `kind` is 2, 3 or 4. */
u32 FUN_002ea408(Holder *object)
{
    u8 kind;

    kind = object->kind;
    if (((kind != 2) && (kind != 3)) && (kind != 4)) {
        return 0;
    }
    return 1;
}

} /* extern "C" */
