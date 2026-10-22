#include "common.h"

extern "C" {

void requestImageDraw(u32 handle, u8 *member);

typedef struct Object {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ u32 handle;
    /* 0x0C */ u8 unk0C[0x18];
    /* 0x24 */ u8 member24[0xEA];
    /* 0x10E */ u8 active;
} Object;

extern Object *g_campCecEdit;

/* Passes the active camp edit object's handle and member to requestImageDraw. */
u32 FUN_002a27e4(void)
{
    Object *object;

    object = g_campCecEdit;
    if (object->active != 0) {
        requestImageDraw(object->handle, object->member24);
    }
    return 0;
}

} /* extern "C" */
