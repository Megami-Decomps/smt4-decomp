#include "common.h"

extern "C" {

typedef struct FadeObject {
    /* 0x00 */ u8 unk00[0x85];
    /* 0x85 */ u8 active;
} FadeObject;

extern int FUN_001634b4(FadeObject *object, f32 value);

/* Resets the object's fade to 0 when it is active. */
void fadeObjectResetIfActive(FadeObject *object)
{
    if (object->active != 0) {
        FUN_001634b4(object, 0.0f);
    }
}

} /* extern "C" */
