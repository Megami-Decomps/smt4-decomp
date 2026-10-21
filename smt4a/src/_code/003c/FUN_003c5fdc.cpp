/* NON_MATCHING: retail preserves return-one and null constants in R7/R6 across cleanup calls and saves six registers; compiled code materializes them at use with a four-register frame. */
#include "common.h"

struct CleanupSceneObject {
    u32 job; // 0x00
};
struct EngineCleanupOwner {
    u8 unk00[8]; // 0x00
    CleanupSceneObject* object; // 0x08
};

extern "C" {
extern EngineCleanupOwner g_engineCleanupOwner;
u32 jobIsValid(u32 job);
void sceneObjDestroy(CleanupSceneObject* object);
void asdOperatorDelete(void* allocation);

// Waits for the owned object's job to stop before destroying and freeing it.
u32 FUN_003c5fdc()
{
    CleanupSceneObject* object = g_engineCleanupOwner.object;
    if (object != NULL) {
        if (jobIsValid(object->job)) {
            return 0;
        }
        sceneObjDestroy(object);
        if (g_engineCleanupOwner.object != NULL) {
            asdOperatorDelete(g_engineCleanupOwner.object);
            g_engineCleanupOwner.object = NULL;
        }
    }
    return 1;
}
}
