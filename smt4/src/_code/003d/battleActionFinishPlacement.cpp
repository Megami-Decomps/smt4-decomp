/* NON_MATCHING: retail unrolls the binding search by two and retains a zero GPR; built search is scalar with a smaller saved-register/frame split (91/82). Alternate optimization candidate. */
#include "shard/W6_W6Match6_ActionController.h"
#include "shard/W6_W6Match3_ColorFade.h"
#include "shard/W6_W6Match8_BattleSpritePlacement.h"
#include "shard/W4_Match6_BtlEntry.h"

namespace {
struct ActionBinding {
    u32 id;
    u32 unk04;
    BattleSpritePlacement placement; // 0x08
    u8 unk28[8];
};
union ActionCompletionWork {
    ActionController controller;
    struct {
        u8 unk0000[0x1398];
        ActionBinding bindings[50];
    } resources;
};
union ActionCompletionActor {
    ActionActor actor;
    ColorFadeWork fade;
    struct {
        u8 unk00[0xc];
        BattleVector3 translation;
        u8 unk18[0x28];
        f32 scale; // 0x40
    } placement;
};
struct BattleBindingIdentity {
    u8 unk00[0xd8];
    u32 id;
};
}

extern "C" {
u8 objIsStateNotOne(void* animation);
BtlMainState* btlGetMainState();
BtlEntry* btlMainFindEntryByListedId(BtlMainState*, s32 id);
void FUN_0034d430(void* animation, const BattleSpritePlacement*, f32 scale);
void FUN_0034c7a8(void* animation, const BattleVector3* translation);
void FUN_0034d504(void* animation);
void animationSelectFirstPart(void* animation);
void FUN_0024057c(BtlMainState*, ColorFadeWork*, s32 duration, u32 alpha);
void FUN_00226fc0(ActionController*);
void FUN_002505c0(u32, u32, u32 effect, u32, u32, u32, u32);

void battleActionFinishPlacement(ActionController* controller)
{
    if (!objIsStateNotOne(controller->animation)) {
        return;
    }
    BtlEntry* entry = btlMainFindEntryByListedId(btlGetMainState(), controller->actor->id);
    const u32 id = reinterpret_cast<const BattleBindingIdentity*>(entry)->id;
    ActionCompletionWork* work = reinterpret_cast<ActionCompletionWork*>(controller);
    ActionBinding* binding = NULL;
    for (s32 i = 0; i < 50; ++i) {
        if (work->resources.bindings[i].id == id) {
            binding = &work->resources.bindings[i];
            break;
        }
    }
    BtlMainState* state = btlGetMainState();
    if (binding) {
        ActionCompletionActor* actor = reinterpret_cast<ActionCompletionActor*>(controller->actor);
        FUN_0034d430(controller->animation, &binding->placement, actor->placement.scale);
        actor = reinterpret_cast<ActionCompletionActor*>(controller->actor);
        FUN_0034c7a8(controller->animation, &actor->placement.translation);
        FUN_0034d504(controller->animation);
        FUN_0024057c(state, reinterpret_cast<ColorFadeWork*>(controller->actor), 0, 0);
    }
    animationSelectFirstPart(controller->animation);
    controller->state = 8;
    FUN_00226fc0(controller);
    const s16 kind = controller->sequence->kind;
    if (kind == 15 || kind == 16) {
        FUN_002505c0(0, 0, 0x1000106, 0, 0, 0, 0);
    } else {
        FUN_002505c0(0, 0, 0x1000108, 0, 0, 0, 0);
    }
}
} // extern "C"
