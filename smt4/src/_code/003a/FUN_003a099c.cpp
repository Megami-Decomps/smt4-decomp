/* NON_MATCHING: Cursor-animation address/accessor inlining and the two shop-script case tails do not merge as in retail. */
#include "shard/S2Scene3a.h"
#include "ui/UiSpriteState.h"

extern "C" {
void FUN_00230df0(s32 enabled);
void FUN_00233240(void *animation, s32 value);
void FUN_002b8ee0(UiSpriteState *animation, s32 value);
s32 vec2GetYInt(const UiSpriteState *animation);
s32 vec2GetXInt(const UiSpriteState *animation);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
s32 FUN_0029e0f8(void);
u32 tableGroupFindEntryIndex(u32 resource, const char *name);
void scrScriptProcessStartEntry(u32 process, u32 entry);
void scrRunOpcodesStub(u32 process);
s32 modelHasLoadedAttachment(void);
void FUN_002a0428(void *manager, s32 value);
void nodeSetTranslation3f(void *node, s32 relative, f32 x, f32 y, f32 z);

void FUN_003a099c(Scene3a *scene)
{
    /* This scene's overlay reuses storage represented as a callback array in the shared prefix. */
    struct InteractionView {
        u8 unk000[8];
        s32 step;
        u8 unk00C[0x154];
        u32 scriptResource;
        u32 unk164;
        u32 scriptProcess;
        u8 unk16C[0x214];
        f32 cursor[2];
        u8 unk388[0x20];
        u8 openingAnimation[0x20];
        UiSpriteState cursorAnimation;
    };
    struct PreviewNodeView {
        u8 unk00[0xC];
        s32 state;
    };
    struct PreviewManagerView {
        u8 unk00[8];
        PreviewNodeView *node;
    };
    typedef char InteractionOffsetsCheck[offsetof(InteractionView, scriptResource) == 0x160 &&
        offsetof(InteractionView, scriptProcess) == 0x168 && offsetof(InteractionView, cursor) == 0x380 &&
        offsetof(InteractionView, cursorAnimation) == 0x3C8 ? 1 : -1];
    InteractionView *work = (InteractionView *)scene;
    switch (work->step) {
    case 0:
        FUN_00230df0(1);
        FUN_00233240(work->openingAnimation, 0);
        work->step = 1;
        break;
    case 1: {
        FUN_002b8ee0(&work->cursorAnimation, 0);
        s32 y = vec2GetYInt(&work->cursorAnimation);
        s32 x = vec2GetXInt(&work->cursorAnimation);
        pointConvertToFloat(work->cursor, x, y);
        if (work->cursorAnimation.animationFlags.completed != 0) {
            switch (scene->slot) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                if (FUN_0029e0f8() != 0) {
                    scene->phase = 5;
                    work->step = 0;
                }
                break;
            case 7: {
                scene->phase = 6;
                work->step = 0;
                u32 entry = tableGroupFindEntryIndex(work->scriptResource, "shop_itembuy");
                scrScriptProcessStartEntry(work->scriptProcess, entry);
                scrRunOpcodesStub(work->scriptProcess);
                break;
            }
            case 8: {
                scene->phase = 7;
                work->step = 0;
                u32 entry = tableGroupFindEntryIndex(work->scriptResource, "shop_selloff");
                scrScriptProcessStartEntry(work->scriptProcess, entry);
                scrRunOpcodesStub(work->scriptProcess);
                break;
            }
            }
        }
        break;
    }
    }
    if (scene->modelManager != NULL && modelHasLoadedAttachment() != 0 &&
        ((PreviewManagerView *)scene->modelManager)->node->state < 0) {
        FUN_002a0428(scene->modelManager, 1);
        nodeSetTranslation3f(((PreviewManagerView *)scene->modelManager)->node, 0, 0.0f, -32000.0f, 0.0f);
    }
}
}
