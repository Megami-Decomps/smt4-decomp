/* NON_MATCHING: only the tail-call target differs: retail branches to 0x2cb8d0 (8 bytes before FUN_002cb8d8, no symbol) without a relocation */
#include "common.h"

extern "C" {

typedef struct Object0029e908 {
    /* 0x00 */ u8 unk00[0x28];
    /* 0x28 */ u8 part[0x3a];
    /* 0x62 */ u8 locked;
} Object0029e908;

s32 func_0x002cb8d0(u8 *part);

/* Runs func_0x002cb8d0 on the object's part unless the object is locked. */
s32 objectPartRunUnlessLocked(Object0029e908 *object)
{
    if (object->locked == 0) {
        return func_0x002cb8d0(object->part);
    }
    return 0;
}

} /* extern "C" */
