#include "common.h"

extern "C" {

typedef struct Target004d8700 {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 handle;
} Target004d8700;

typedef struct Holder004d8700 {
    /* 0x00 */ Target004d8700 *target;
} Holder004d8700;

void animationSelectClip(u32 handle, u32 index, u8 flag, f32 value);

/* Forwards `index` to animationSelectClip for the held target's handle (flag 2, value 0), if there is a target. */
void targetStartIndexWithFlag2(Holder004d8700 *holder, u32 index)
{
    if (holder->target != NULL) {
        animationSelectClip(holder->target->handle, index, 2, 0.0f);
    }
}

} /* extern "C" */
