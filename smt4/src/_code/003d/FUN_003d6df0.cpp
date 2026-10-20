#include "common.h"

extern "C" {

typedef struct Object {
    /* 0x000 */ u8 unk000[0x44];
    /* 0x044 */ u8 timer[0x5F0];
    /* 0x634 */ u32 flags;
} Object;

void rangeInit(void *range, f32 start, f32 end, s16 duration, s16 delay);

/* Starts the object's timer from `start` to `end` over `frames` and flags it as started. */
void FUN_003d6df0(Object *obj, f32 start, f32 end, f32 frames)
{
    rangeInit(obj->timer, start, end, (s16)(s32)frames, 0);
    obj->flags |= 0x400000;
}

} /* extern "C" */
