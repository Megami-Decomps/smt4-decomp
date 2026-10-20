/* NON_MATCHING: retail keeps the constants 1 (r7) and 0 (r6) in registers across the calls (and saves r7/r8); the build uses immediates */
#include "common.h"

extern "C" {

typedef struct SceneObj003c3ec4 {
    /* 0x00 */ u32 job;
} SceneObj003c3ec4;

typedef struct SceneHolder003c3ec4 {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SceneObj003c3ec4 *scene;
} SceneHolder003c3ec4;

s32 jobIsValid(u32 handle);
void sceneObjDestroy(SceneObj003c3ec4 *scene);
void asdOperatorDelete(void);

extern SceneHolder003c3ec4 DAT_00588c40; /* 0x588c40 */

/* Destroys the held scene once its job has ended; returns 0 while the job is still running. */
s32 sceneHolderUpdate(void)
{
    SceneObj003c3ec4 *scene = DAT_00588c40.scene;

    if (scene != NULL) {
        if (jobIsValid(scene->job) != 0) {
            return 0;
        }
        sceneObjDestroy(scene);
        if (DAT_00588c40.scene != NULL) {
            asdOperatorDelete();
            DAT_00588c40.scene = NULL;
        }
    }
    return 1;
}

} /* extern "C" */
