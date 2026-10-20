#include "common.h"

extern "C" {

void FUN_0010d2a6(u32 handle);
s32 FUN_002f73b8(u32 handle);

typedef struct Holder {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 handle;
} Holder;

/* If active: runs FUN_0010d2a6 on the handle when FUN_002f73b8 accepts it, then clears `active`. */
void FUN_00303d52(Holder *object)
{
    s32 accepted;
    u32 handle;

    if (object->active != 0) {
        handle = object->handle;
        accepted = FUN_002f73b8(handle);
        if (accepted != 0) {
            FUN_0010d2a6(handle);
        }
        object->active = 0;
    }
}

} /* extern "C" */
