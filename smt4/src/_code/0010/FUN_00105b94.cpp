/* NON_MATCHING: retail chains the three component initializer return-this values in R0; the current void helper API requires preserving the allocation and computing independent member addresses. */
#include "title/titleMain.h"

namespace {
struct TitleSceneStorage {
    u8 unk0000[0x4a0];       // 0x0000
    u8 firstState[0x6fc];    // 0x04a0
    u8 secondState[0x508];   // 0x0b9c
    u8 thirdState[0x128];    // 0x10a4
    f32 unitValues[4];       // 0x11cc
    u8 unk11dc[0x1c0];      // 0x11dc
};
}

extern "C" {
void* asdOperatorNew(u32);
void _ZN10FloatStateC1Ev(void*);
void FUN_0010f144(TitleScene*);
extern TitleScene* g_titleScene;

// Allocate the full scene, initialize its three state blocks and publish it.
void FUN_00105b94()
{
    TitleSceneStorage* scene = (TitleSceneStorage*)asdOperatorNew(sizeof(TitleSceneStorage));
    if (scene != NULL) {
        _ZN10FloatStateC1Ev(scene->firstState);
        _ZN10FloatStateC1Ev(scene->secondState);
        _ZN10FloatStateC1Ev(scene->thirdState);
        scene->unitValues[0] = 1.0f;
        scene->unitValues[1] = 1.0f;
        scene->unitValues[2] = 1.0f;
        scene->unitValues[3] = 1.0f;
    }
    g_titleScene = (TitleScene*)scene;
    FUN_0010f144((TitleScene*)scene);
}
}
