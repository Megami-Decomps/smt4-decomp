#include "shard/S2Scene3a.h"
#include "shard/W5_W5Match2_ScalarArguments.h"
#include "ui/UiSpriteApi.h"
#include "code/Code0023.h"
#include "gamedata/TableGroup.h"
#include "gfx/ModelBoneAttachment.h"
#include "script/scrScriptProcess.h"

extern "C" {
void FUN_00233240(Scene3aSprites *animation, u32 index);
void pointConvertToFloat(FloatPoint *point, s32 x, s32 y);
s32 tableGroupFindEntryIndex(TableGroupHeader *resource, const char *name);
u32 scrScriptProcessStartEntry(ScriptProcess *process, s32 entry);
s32 modelHasLoadedAttachment(const ModelBoneAttachmentRoot *object);
void nodeSetTranslation3f(AsdMdlNode *node, s32 index, NodeVec3 translation);
} /* extern "C" */

enum {
    SHOP_OPENING_BEGIN = 0,
    SHOP_OPENING_ANIMATE = 1,
    SHOP_PHASE_ITEM_LIST = 5,
    SHOP_PHASE_BUY = 6,
    SHOP_PHASE_SELL = 7,
    SHOP_SLOT_BUY = 7,
    SHOP_SLOT_SELL = 8
};

/* Enters a shop phase with its animation reset to the first substep. */
static __inline void shopEnterPhase(ShopPageTransition *transition, s32 phase)
{
    ShopPageTransition next = { phase, SHOP_OPENING_BEGIN };
    *transition = next;
}

/* Enters a transaction phase and starts its entry of the shop script. */
static __inline void shopEnterScriptPhase(Scene3a *scene, s32 phase, const char *name)
{
    shopEnterPhase(&scene->pageTransition, phase);
    scrScriptProcessStartEntry(scene->process, tableGroupFindEntryIndex((TableGroupHeader *)scene->scriptTable, name));
}

/* Moves on from the opening animation, running the chosen transaction script when needed (the same
 * inline step as Apocalypse's ShopMenuView::finishPageTransition). */
static __inline void finishPageTransition(Scene3a *scene)
{
    switch (scene->slot) {
    case 0:
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
        if (FUN_0029e0f8() != 0) {
            shopEnterPhase(&scene->pageTransition, SHOP_PHASE_ITEM_LIST);
        }
        return;
    case SHOP_SLOT_BUY:
        shopEnterScriptPhase(scene, SHOP_PHASE_BUY, "shop_itembuy");
        break;
    case SHOP_SLOT_SELL:
        shopEnterScriptPhase(scene, SHOP_PHASE_SELL, "shop_selloff");
        break;
    default:
        return;
    }
    scrRunOpcodesStub(scene->process);
}

/* Opens the selected shop page and stages its model preview. */
extern "C" void shopUpdatePageOpening(Scene3a *scene)
{
    switch (scene->pageTransition.substep) {
    case SHOP_OPENING_BEGIN:
        FUN_00230df0(1);
        FUN_00233240(&scene->animation, 0);
        scene->pageTransition.substep = SHOP_OPENING_ANIMATE;
        break;
    case SHOP_OPENING_ANIMATE: {
        UiSpriteState *animation = &scene->animation.sprites[0];
        uiSlidingSpriteAdvance(animation, 0);
        pointConvertToFloat((FloatPoint *)&scene->region, vec2GetXInt(animation), vec2GetYInt(animation));
        if (uiSpriteGetCompletionState(animation) != 0) {
            finishPageTransition(scene);
        }
        break;
    }
    }
    if (scene->modelManager != NULL &&
        modelHasLoadedAttachment((const ModelBoneAttachmentRoot *)scene->modelManager) != 0 &&
        ((AsdMdlObject *)scene->modelManager)->node->sceneGroup < 0) {
        lightOwnerRegister((AsdMdlObject *)scene->modelManager, 1);
        nodeSetTranslation3f(((AsdMdlObject *)scene->modelManager)->node, 0, nodeVec3(0.0f, -32000.0f, 0.0f));
    }
}
