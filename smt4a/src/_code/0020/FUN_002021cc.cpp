/* NON_MATCHING: retail peels the i == 0 slide iteration, keeps -330 as the hoisted constant (330 = 0 - it) and addresses slides[1].done through r5 + 0x100; the peeling/constant choice is not reproduced. */
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
    if (overlay->unk1A0 == 2) {
        s32 start = 330;
        if (overlay->unk1A4 != 0) {
            start = -330;
        }
        for (s32 i = 0; i < 2; i++) {
            if (i == 0 || overlay->slides[i - 1].elapsed > 2) {
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
            overlay->unk1A0 = 3;
            return 0;
        }
    }
    if (overlay->unk1A0 == 1) {
        s32 end = -330;
        if (overlay->unk1A4 != 0) {
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
            overlay->unk1A0 = 0;
        }
    }
    return 0;
}

} /* extern "C" */
