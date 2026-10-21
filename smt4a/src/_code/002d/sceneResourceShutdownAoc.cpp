#include "common.h"

struct SceneResourceWork {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 stopping;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void* aoc;
};

extern "C" {
extern SceneResourceWork* g_sceneResourceWork;
void aocMainShutdown(void* aoc);
void* FUN_0047c950(void* aoc);
void asdOperatorDelete(void* object);

// Stop and release the scene's add-on-content manager.
void sceneResourceShutdownAoc(void)
{
    SceneResourceWork* work = g_sceneResourceWork;
    work->stopping = 1;
    if (work->aoc != NULL) {
        aocMainShutdown(work->aoc);
        if (work->aoc != NULL) {
            asdOperatorDelete(FUN_0047c950(work->aoc));
            work->aoc = NULL;
        }
    }
}
}
