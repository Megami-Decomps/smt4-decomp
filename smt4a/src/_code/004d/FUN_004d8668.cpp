#include "common.h"

extern "C" {

typedef struct HandleObject {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 id;
} HandleObject;

typedef struct HandleHolder {
    /* 0x00 */ HandleObject *object;
} HandleHolder;

extern f32 FUN_004ffb30(u32 id);

/* The value FUN_004ffb30 reports for the held object's id, or 0 with none. */
f32 FUN_004d8668(HandleHolder *holder)
{
    if (holder->object != NULL) {
        return FUN_004ffb30(holder->object->id);
    }
    return 0.0f;
}

} /* extern "C" */
