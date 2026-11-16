#include "common.h"

extern "C" {

typedef struct FadeObject {
    /* 0x00 */ u8 unk00[0x85];
    /* 0x85 */ u8 active;
} FadeObject;

extern int effectRenderTransformedInstance(FadeObject *object, f32 value);

/* Resets the object's fade to 0 when it is active. */
void fadeObjectResetIfActive(FadeObject *object)
{
    if (object->active != 0) {
        effectRenderTransformedInstance(object, 0.0f);
    }
}

} /* extern "C" */
