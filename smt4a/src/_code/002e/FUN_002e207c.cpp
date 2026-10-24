#include "common.h"

extern "C" {

/* An effect controller: a scale vector, a clip range and a link holder handle. */
struct LinkController {
    /* 0x00 */ f32 scale[3];
    /* 0x0C */ u32 unk0C;
    /* 0x10 */ f32 range;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ f32 step;
    /* 0x1C */ u32 holder;
    /* 0x20 */ u32 unk20;
    /* 0x24 */ u32 pending;
    /* 0x28 */ u32 unk28;
};

s32 linkHolderCallFirst(u32 holder);
void linkHolderApplyFirst(u32 holder, s32 arg, f32 x, f32 y);
void FUN_0034a3b4(void);

/* Resets the controller's scale for the holder's kind, cancels a pending link and finishes. */
void FUN_002e207c(LinkController *controller)
{
    controller->step = 0.012f;
    controller->range = 350.0f;
    if (linkHolderCallFirst(controller->holder) == 0x23) {
        controller->scale[0] = 1.0f;
        controller->scale[1] = 5.4f;
        controller->scale[2] = 1.5f;
    } else {
        controller->scale[0] = 1.2f;
        controller->scale[1] = 5.3f;
        controller->scale[2] = 0.5f;
    }
    controller->unk28 = 0;
    if (controller->pending != 0) {
        controller->pending = 0;
        linkHolderApplyFirst(controller->holder, 0, 0.0f, 0.0f);
    }
    FUN_0034a3b4();
}

} /* extern "C" */
