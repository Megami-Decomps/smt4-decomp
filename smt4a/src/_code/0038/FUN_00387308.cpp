#include "common.h"

extern "C" {

typedef struct SceneObj {
    /* 0x00 */ u32 job;
} SceneObj;

typedef struct SceneState {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SceneObj *object;
} SceneState;

extern SceneState g_engineCleanupOwner; /* 0x588c40 */

extern int jobStop(u32 job, int arg);
extern int asdOperatorDelete(void);
extern int sceneObjDestroy(SceneObj *object);

/* Destroys the scene object: stops its job and frees it. */
void FUN_00387308(void)
{
    SceneObj *object = g_engineCleanupOwner.object;

    if (object != NULL) {
        sceneObjDestroy(object);
        jobStop(object->job, 0);
        if (g_engineCleanupOwner.object != NULL) {
            asdOperatorDelete();
            g_engineCleanupOwner.object = NULL;
        }
    }
}

} /* extern "C" */
