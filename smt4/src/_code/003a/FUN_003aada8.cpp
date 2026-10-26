/* NON_MATCHING: Retail ldr r1, [pc, #100] differs from recovered add r1, r0, #42496. */
#include "common.h"
#include "camp/RenderCtx.h"

struct TitleSceneLocalView {
    u8 unk00[0x14];                 // 0x0000
    s32 unk14;                      // 0x0014
    u8 unk18[0x594 - 0x18];         // 0x0018
    u32 unk594;                     // 0x0594
    u8 unk598[0xA688 - 0x598];      // 0x0598
    void (TitleSceneLocalView::*unkA688[1])(); // 0xA688: variable-length member callback table
};

extern "C" {
extern RenderCtx *g_titleScene;
void FUN_002bed3c(TitleSceneLocalView* scene);
void FUN_002c18e4(RenderCtx *scene);

// Set the scene state, invoke its selected member callback, and update the title scene.
void FUN_003aada8(TitleSceneLocalView* scene)
{
    FUN_002bed3c(scene);
    scene->unk594 = 31;

    void (TitleSceneLocalView::*callback)() = scene->unkA688[scene->unk14];
    if (callback != 0) {
        (scene->*callback)();
    }

    renderCtxApplyTransforms(g_titleScene);
    FUN_002c18e4(g_titleScene);
}
}
