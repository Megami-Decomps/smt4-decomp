/* NON_MATCHING: the camera constructor (inline MikadoCamera: field clears, UShortVec3 x2, SelectionFlags, Obj55ca08 vtable) and every call match; armcc numbers the hoisted constants r7/r5/r6 where retail has r5/r6/r7, stores the vtable after the base adjustment, and loads the camera before the second state store. */
#include "mikado/mikadoMain.h"
#include <stddef.h>

extern "C" {
extern MikadoGlobals g_mikado;
extern int _ZN9Obj55ca08D1Ev(Obj55ca08 *sub);
void FUN_003ba734(MikadoCamera *camera, const UShortVec3 *start);
void FUN_002a7838(void);
void sceneUpdateHandlerAndWidget(MikadoCamera *camera);
int asdMemFreeNonNull(int block);

/* Steps the mikado controller's state machine: creates the camera, runs its scene, then tears it
 * down; returns -1 once finished. */
u32 FUN_001fdff0(void)
{
    MikadoWork *work = g_mikado.work;

    switch (work->state) {
    case 0: {
        work->camera = new MikadoCamera;
        work->camera->initialize();
        UShortVec3 start;
        start.a = g_mikado.cameraStartA;
        start.c = g_mikado.cameraStartC;
        FUN_003ba734(work->camera, &start);
        work->state = 1;
        break;
    }
    case 1:
        sceneUpdateHandlerAndWidget(work->camera);
        if (work->camera->ready != 0) {
            work->state = 2;
        }
        break;
    case 2:
        work->state = 3;
        work->done = 1;
        if (work->camera != NULL) {
            FUN_002a7838();
            if (work->camera != NULL) {
                asdMemFreeNonNull(_ZN9Obj55ca08D1Ev(&work->camera->sub) - offsetof(MikadoCamera, sub));
            }
            work->camera = NULL;
        }
        break;
    case 3:
        return 0xFFFFFFFF;
    }
    return 0;
}

} /* extern "C" */
