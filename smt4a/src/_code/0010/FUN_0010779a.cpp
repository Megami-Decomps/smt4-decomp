#include "common.h"

extern "C" {

void FUN_002ef268(void *object, s32 mode);

typedef struct ModeObject {
    /* 0x000 */ u8 unk000[0xC0];
    /* 0x0C0 */ s32 mode;
    /* 0x0C4 */ u8 unk0C4[0x86];
    /* 0x14A */ s8 lastMode;      /* last mode other than 2 */
    /* 0x14B */ u8 unk14B[0x121];
    /* 0x26C */ s8 skipNext;      /* swallows the next mode change */
} ModeObject;

/* Changes the object's mode: a pending skip cancels the change; otherwise it is set (through FUN_002ef268 when `apply` is set) and remembered unless it is 2. */
void FUN_0010779a(ModeObject *object, s32 mode, s32 apply)
{
    if (object->skipNext != 0) {
        object->skipNext = 0;
    } else {
        if (apply != 0) {
            FUN_002ef268(object, mode);
        } else {
            object->mode = mode;
        }
        if (mode != 2) {
            object->lastMode = (s8)mode;
            return;
        }
    }
}

} /* extern "C" */
