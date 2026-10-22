/* NON_MATCHING: register allocation only: retail holds &timing[cur] in r4 and the span in ip; built swaps them */
#include "common.h"

extern "C" {

typedef struct {
    u8 unk0[0x20];
    s32 frame;       /* 0x20 */
    u8 unk24[0x40 - 0x24];
    f32 value;       /* 0x40 */
} CurveKey; /* size 0x44 */

typedef struct {
    CurveKey keys[4];          /* 0x000 */
    u8 unk110[0x224 - 0x110];
    f32 slope;                 /* 0x224 */
    u8 unk228[0x250 - 0x228];
    f32 target;                /* 0x250 */
    u8 unk254[0x2e4 - 0x254];
    s8 keyIndex;               /* 0x2e4 */
    u8 unk2e5[0x320 - 0x2e5];
    s32 span;                  /* 0x320 */
} KeyCurve;

/* Advances the curve to the next key whose timing frame lies after the current one and sets up its slope. */
void FUN_001ee200(KeyCurve *curve, CurveKey *timing)
{
    s32 step = 1;
    s32 cur;

    if (curve->keyIndex >= 3) {
        curve->keyIndex = 4;
    }
    cur = curve->keyIndex;
    for (; cur + step < 4; step++) {
        curve->span = timing[cur + step].frame - timing[cur].frame;
        if (curve->span > 0) {
            CurveKey *from = &curve->keys[cur];
            CurveKey *to = &curve->keys[cur + step];

            curve->slope = (to->value - from->value) / (f32)(to->frame - from->frame);
            curve->target = to->value;
            curve->keyIndex = cur + step;
            return;
        }
    }
}

} /* extern "C" */
