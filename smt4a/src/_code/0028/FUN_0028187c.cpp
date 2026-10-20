#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[0xF4];
    /* 0xF4 */ u32 handle;
} Object;

typedef struct Global57f110 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Object *object;
} Global57f110;
extern Global57f110 DAT_0057f110;

void FUN_00275f44(u32 handle, u32 request);

/* Passes the held object's handle and `request` to FUN_00275f44, if there is an object. */
void FUN_0028187c(u32 request)
{
    if (DAT_0057f110.object != NULL) {
        FUN_00275f44(DAT_0057f110.object->handle, request);
        return;
    }
}

} /* extern "C" */
