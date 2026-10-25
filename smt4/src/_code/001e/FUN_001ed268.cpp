#include "shard/W9_W9Match1_PositionedLayoutTask.h"

extern "C" {
PositionedLayoutTaskWork *taskCreate(void (*update)(void *), u32, u32, u32, u32, u32 size, u32 list, u32, u32);
void memClear(void *work, u32 bytes);
void __aeabi_memcpy4(void *destination, const void *source, u32 bytes);
void FUN_00291340(void *layout, f32 *firstPair, f32 *secondPair, f32 *origin, f32 *dimensions);
void FUN_001c2c70(void *work);

// Create a positioned layout task using the caller's parameter and layout blocks.
__softfp PositionedLayoutTaskWork *FUN_001ed268(u32 owner, const PositionedLayoutParameters *parameters,
                                               const PositionedLayoutData *layout, u32 value,
                                               f32 scale, u8 kind, u16 frame, f32 speed)
{
    PositionedLayoutTaskWork *work = taskCreate(FUN_001c2c70, 0, 0, 0, 0, sizeof(PositionedLayoutTaskWork), 3, 0, 0);
    if (work != NULL) {
        memClear(work, sizeof(PositionedLayoutTaskWork));
        __aeabi_memcpy4(&work->parameters, parameters, sizeof(work->parameters));
        work->position = parameters->position;
        __aeabi_memcpy4(&work->layout, layout, sizeof(work->layout));
        work->value = value;
        work->speed = speed;
        work->depth = (f32)work->layout.depth;
        work->owner = owner;
        work->kind = kind;
        work->secondState = -1;
        work->firstState = -1;
        FUN_00291340(&work->layout, work->firstPair, work->secondPair, work->origin, work->dimensions);
        work->scale = scale;
        work->startFrame = frame;
        work->frame = frame;
    }
    return work;
}
}
