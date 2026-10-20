/* If the object's counter differs from the current FUN_002f9e1c value, hands the new value to FUN_00311724 and returns 1; otherwise returns 0. */
#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 notifier[4];
    /* 0x08 */ s32 counter;
} Object;

extern s32 FUN_002f9e1c(void);
extern void FUN_00311724(void *notifier, s32 value);

u32 FUN_002f86ac(Object *obj)
{
    s32 current = FUN_002f9e1c();

    if (obj->counter != current) {
        FUN_00311724(obj->notifier, current);
        return 1;
    }
    return 0;
}

}
