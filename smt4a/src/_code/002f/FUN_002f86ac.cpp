/* If the object's counter differs from the current FUN_002f9e1c value, hands the new value to vectorEraseAtStride8 and returns 1; otherwise returns 0. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 notifier[4];
    /* 0x08 */ s32 counter;
} Object;

extern s32 FUN_002f9e1c(void);
extern void vectorEraseAtStride8(void *notifier, s32 value);

u32 FUN_002f86ac(Object *obj)
{
    s32 current = FUN_002f9e1c();

    if (obj->counter != current) {
        vectorEraseAtStride8(obj->notifier, current);
        return 1;
    }
    return 0;
}

}
