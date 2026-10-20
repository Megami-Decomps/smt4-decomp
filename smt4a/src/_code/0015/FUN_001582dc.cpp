#include "common.h"

extern "C" {

void FUN_0016cb50(s32 handle, s32 state);

typedef struct Holder {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ s32 handle;
    /* 0x10 */ u8 unk10[0x14];
    /* 0x24 */ u8 state;
    /* 0x25 */ u8 released;
} Holder;

/* If the handle is valid and the state is 1, releases it, sets the state to 0 and marks it released. */
void FUN_001582dc(Holder *object)
{
    if (object->handle != -1 && object->state == 1) {
        FUN_0016cb50(object->handle, object->state);
        object->state = 0;
        object->released = 1;
    }
}

} /* extern "C" */
