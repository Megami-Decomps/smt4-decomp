#include "AsdSDK/Source/Gfx/Model/AsdMotionValueApi.h"

extern "C" {

typedef struct Holder {
    /* 0x0000 */ u8 unk0000[0x4394];
    /* 0x4394 */ void *target;
} Holder;


/* Returns FUN_0027f94c's value for the holder's target, or -1.0 when there is none. */
f32 FUN_00338404(Holder *holder)
{
    if (holder->target != NULL) {
        return FUN_0027f94c(holder->target);
    }
    return -1.0f;
}

} /* extern "C" */
