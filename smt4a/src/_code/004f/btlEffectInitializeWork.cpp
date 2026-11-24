#include "battle/BtlEffectReset.h"
#include "code/Code004f_Smt4a.h"

extern "C" {
void btlCameraFinishTransition(void *);
void panelReset(void *);
void FUN_004f8fa0(void *);

/* Initializes the effect job's shared work, clearing its transitions, models and marker slots. */
void btlEffectInitializeWork(BtlEffectFiles *work, BtlEffectJobA *)
{
    work->roster = NULL;
    panelReset(work);
    btlCameraFinishTransition(work);
    FUN_004f8fa0(work);
    obj4FSlots28Reset((Obj4FSlots28 *)work);
    resetEffectPlacements(work);
    work->flags = 0;
    work->numberedIndex = 12;
    work->requestA = 0;
    work->requestB = 0;
    clearMarkerSlots(work);
    work->flags |= BTL_EFFECT_JOB_LOAD_REFERENCES;
    work->wait = 0;
    work->scaleFactor = 1.0f;
}
} /* extern "C" */
