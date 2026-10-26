#include "common.h"
#include "AsdSDK/Source/Gfx/AsdGfxHelpers_Smt4a.h"

extern "C" {

typedef struct ModelHolder {
    /* 0x0 */ u8 unk0[4];
    /* 0x4 */ void *model;
} ModelHolder;

typedef struct ModelRef {
    /* 0x0 */ ModelHolder *holder;
} ModelRef;

void FUN_003fd7c0(void *model, u32 index, f32 frame, u32 flag);

/* Starts the referenced model's entry `index` at frame 0. */
void asdModelStartReferencedAnimation(ModelRef *ref, u32 index)
{
    if (ref->holder != NULL) {
        f32 frame = 0.0f;
        FUN_003fd7c0(ref->holder->model, index, frame, 2);
    }
}

} /* extern "C" */
