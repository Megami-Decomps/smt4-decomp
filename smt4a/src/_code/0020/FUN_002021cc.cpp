/* NON_MATCHING: the first slide's step is its own copy as in retail (the loop enters it directly); remaining: retail
 * keeps -330 in a register and forms 330 as 0 - it, addresses slides[1].done through r5 + 0x100 and shares one
 * epilogue between the two returns. */
#include "shard/Shard0031.h"

extern "C" {

extern OverlayRef g_campCec;

void statusCameraApply(void);
void FUN_003e5858(Object *object);
u32 FUN_0039a2d8(s32 *output, s32 start, s32 end, s32 duration, s32 elapsed, s32 easeOut);

// Per-frame update of the status screen overlay: state handler, camera, and the two slide transitions.
u32 FUN_002021cc(void)
{
    OverlayObj *overlay = g_campCec.instance;
    OverlayStateHandler handler = overlay->handlers[overlay->state];
    if (handler != NULL && handler(overlay) == 3 && overlay->nextState != -1) {
        overlay->previousState = overlay->state;
        overlay->state = overlay->nextState;
        overlay->nextState = -1;
    }
    StatusScene *scene = &overlay->scene;
    if (overlay->state > 0 && overlay->state != 10 && overlay->state != 12) {
        statusCameraApply();
        FUN_003e5858(scene->object);
    }
    if (overlay->slidePhase == 2) {
        s32 start = overlay->slideReversed != 0 ? -330 : 330;
        for (s32 i = 0; i < 2; i++) {
            if (i == 0) {
                if (FUN_0039a2d8(&overlay->slides[i].offset, start, 0, 4, overlay->slides[i].elapsed, 1) != 0) {
                    overlay->slides[i].done = 1;
                } else {
                    overlay->slides[i].elapsed++;
                }
            } else if (overlay->slides[i - 1].elapsed > 2) {
                if (FUN_0039a2d8(&overlay->slides[i].offset, start, 0, 4, overlay->slides[i].elapsed, 1) != 0) {
                    overlay->slides[i].done = 1;
                } else {
                    overlay->slides[i].elapsed++;
                }
            }
            overlay->slides[i].alpha = 1.0f;
        }
        if (overlay->slides[1].done != 0) {
            overlay->slides[0].elapsed = 0;
            overlay->slides[0].done = 0;
            overlay->slides[1].elapsed = 0;
            overlay->slides[1].done = 0;
            overlay->slidePhase = 3;
            return 0;
        }
    }
    if (overlay->slidePhase == 1) {
        s32 end = -330;
        if (overlay->slideReversed != 0) {
            end = 330;
        }
        for (s32 i = 0; i < 2; i++) {
            if (FUN_0039a2d8(&overlay->slides[i].offset, 0, end, 3, overlay->slides[i].elapsed, 1) != 0) {
                overlay->slides[i].done = 1;
            } else {
                overlay->slides[i].elapsed++;
            }
        }
        if (overlay->slides[1].done != 0) {
            overlay->slides[0].elapsed = 0;
            overlay->slides[0].done = 0;
            overlay->slides[1].elapsed = 0;
            overlay->slides[1].done = 0;
            overlay->slidePhase = 0;
        }
    }
    return 0;
}

} /* extern "C" */
