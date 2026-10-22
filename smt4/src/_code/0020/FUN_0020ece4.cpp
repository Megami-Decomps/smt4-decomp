#include "common.h"

struct SceneResourceWork {
    /* 0x00 */ u8 unk00[0x18];
    /* 0x18 */ u8 stopping;
    /* 0x19 */ u8 unk19[3];
    /* 0x1C */ void* aoc;
};

extern "C" {
extern SceneResourceWork* g_sceneResourceWork;
void FUN_002c5700(void* aoc);
void* FUN_0027e974(void* aoc);
void asdMemFreeNonNull(void* object);

// Stop and release the scene's add-on-content manager.
void FUN_0020ece4(void)
{
    SceneResourceWork* work = g_sceneResourceWork;
    work->stopping = 1;
    if (work->aoc != NULL) {
        FUN_002c5700(work->aoc);
        if (work->aoc != NULL) {
            asdMemFreeNonNull(FUN_0027e974(work->aoc));
            work->aoc = NULL;
        }
    }
}
}
