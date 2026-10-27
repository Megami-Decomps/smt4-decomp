/* NON_MATCHING: the shop-script arms for slots 7 and 8 keep separate scrRunOpcodesStub tails (retail jumps arm 7 into arm 8's run), the case-0 step store uses r1 not r0, and the cursor-animation address scheduling differs. */
#include "shard/S2Scene3a.h"
#include "ui/UiSpriteState.h"
#include "code/Code0023.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct ScriptRunState;
struct ModelBoneAttachmentRoot;

extern "C" {
void FUN_00233240(void *animation, s32 value);
void FUN_002b8ee0(UiSpriteState *animation, s32 value);
s32 vec2GetYInt(const UiSpriteState *animation);
s32 vec2GetXInt(const UiSpriteState *animation);
s32 uiSpriteGetCompletionState(const UiSpriteState *animation);
void pointConvertToFloat(f32 *point, s32 x, s32 y);
u32 tableGroupFindEntryIndex(void *resource, const char *name);
void scrScriptProcessStartEntry(ScriptRunState *process, s32 entry);
s32 scrRunOpcodesStub(ScriptRunState *process);
s32 modelHasLoadedAttachment(const ModelBoneAttachmentRoot *object);
void nodeSetTranslation3f(void *node, s32 relative, f32 x, f32 y, f32 z);

struct InteractionPhase {
    s32 phase;
    s32 step;
};

static __inline void interactionSet(InteractionPhase *target, s32 phase, s32 step)
{
    InteractionPhase value = { phase, step };
    *target = value;
}

void FUN_003a099c(Scene3a *scene)
{
    /* This scene's overlay reuses storage represented as a callback array in the shared prefix. */
    struct InteractionView {
        u32 unk000;
        InteractionPhase transition;
        u8 unk00C[0x154];
        void *scriptResource;
        u32 unk164;
        ScriptRunState *scriptProcess;
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
    switch (work->transition.step) {
    case 0:
        FUN_00230df0(1);
        FUN_00233240(work->openingAnimation, 0);
        work->transition.step = 1;
        break;
    case 1: {
        UiSpriteState *animation = &work->cursorAnimation;
        FUN_002b8ee0(animation, 0);
        s32 y = vec2GetYInt(animation);
        s32 x = vec2GetXInt(animation);
        pointConvertToFloat(work->cursor, x, y);
        if (uiSpriteGetCompletionState(animation) != 0) {
            switch (scene->slot) {
            case 0:
            case 1:
            case 2:
            case 3:
            case 4:
            case 5:
            case 6:
                if (FUN_0029e0f8() != 0) {
                    interactionSet(&work->transition, 5, 0);
                }
                break;
            case 7:
                interactionSet(&work->transition, 6, 0);
                scrScriptProcessStartEntry(work->scriptProcess,
                                           tableGroupFindEntryIndex(work->scriptResource, "shop_itembuy"));
                scrRunOpcodesStub(work->scriptProcess);
                break;
            case 8:
                interactionSet(&work->transition, 7, 0);
                scrScriptProcessStartEntry(work->scriptProcess,
                                           tableGroupFindEntryIndex(work->scriptResource, "shop_selloff"));
                scrRunOpcodesStub(work->scriptProcess);
                break;
            }
        }
        break;
    }
    }
    if (scene->modelManager != NULL &&
        modelHasLoadedAttachment(reinterpret_cast<const ModelBoneAttachmentRoot *>(scene->modelManager)) != 0 &&
        ((PreviewManagerView *)scene->modelManager)->node->state < 0) {
        FUN_002a0428(reinterpret_cast<AsdMdlObject *>(scene->modelManager), 1);
        nodeSetTranslation3f(((PreviewManagerView *)scene->modelManager)->node, 0, 0.0f, -32000.0f, 0.0f);
    }
}
}
