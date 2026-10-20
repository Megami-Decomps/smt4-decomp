#include "common.h"

extern "C" {

void texOwner1480Free(u32 *member);
void asdMemFree(void *memory);
s32 jobFind(u32 job);

typedef struct Scene {
    /* 0x00 */ u32 job;
    /* 0x04 */ u8 unk04[4];
    /* 0x08 */ u8 running;
    /* 0x09 */ u8 unk09[0x5F];
    /* 0x68 */ u32 member68[1];
} Scene;
extern Scene *DAT_00587f28;

/* Returns 1 while the scene's job is still found or the scene has not started running; otherwise destroys the scene and returns 0. */
u32 FUN_00224668(void)
{
    Scene *scene;
    s32 found;

    scene = DAT_00587f28;
    if (DAT_00587f28 != NULL) {
        found = jobFind(DAT_00587f28->job);
        if ((found != 0) || (scene->running == 0)) {
            return 1;
        }
        if (DAT_00587f28 != NULL) {
            texOwner1480Free(DAT_00587f28->member68);
            asdMemFree(DAT_00587f28);
            DAT_00587f28 = NULL;
        }
    }
    return 0;
}

} /* extern "C" */
