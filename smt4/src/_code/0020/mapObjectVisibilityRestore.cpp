/* NON_MATCHING: 110 lines (the source of Apocalypse's twin FUN_002d8cec): retail threads the group test into the
 * inner loop's entries (jumping straight to the primary or secondary slot address) and reloads the model before the
 * motion call; saved registers differ from there. */
#include "gfx/ModelGroups.h"
#include "game/GameState.h"
#include "AsdSDK/Source/Gfx/Model/AsdMotionControlApi.h"
/* Named floats in the shared slot's padding would raise the union's alignment. */
struct ModelGroupResumeSlot {
    u8 active, dirty, visible, unk03;
    f32 position[3];
    f32 yaw;
    s32 animation;
    u8 unk18[8];
    AsdMdlObject *model;
    u8 pending;
    u8 unk25[7];
};
struct ModelGroupsModeView { u8 unk00[0xC]; u16 mode; };
typedef char ModelGroupResumeOffsets[(sizeof(ModelGroupResumeSlot) == 0x2C && offsetof(ModelGroupResumeSlot, animation) == 0x14) ? 1 : -1];
extern "C" {
extern ModelGroups *g_modelGroups;
void FUN_001e2d88();
void modelPartSetRotationDegrees(AsdMdlNode *, s32, f32, f32, f32);
}
static inline void suspendModelGroupSlot(ModelGroupResumeSlot *slot)
{
    AsdMdlObject *model = slot->model;
    if (!(model->flags & 2)) {
        model->flags |= 2;
        model->node->sceneNode->positionFollowed = 0;
        modelSetScale(slot->model->node, 0.0f);
    }
}
static inline void showModelGroupSlot(ModelGroupResumeSlot *slot)
{
    AsdMdlObject *model = slot->model;
    if (model->flags & 2) {
        model->flags &= ~2;
        model->node->sceneNode->positionFollowed = 1;
        modelSetScale(slot->model->node, 1.0f);
    }
}
/* Hides the active map objects while the game is loading, then restores their visibility and saved transforms. */
extern "C" void mapObjectVisibilityRestore(void)
{
    if (reinterpret_cast<const ModelGroupsModeView *>(g_modelGroups)->mode != 22)
        return;
    FUN_001e2d88();
    for (s32 group = 0; group < 2; ++group) {
        s32 count = group == 0 ? 9 : 3;
        for (s32 i = 0; i < count; ++i) {
            ModelGroupSlot *storage = group == 0 ? &g_modelGroups->primary[i] : &g_modelGroups->secondary[i];
            ModelGroupResumeSlot *slot = reinterpret_cast<ModelGroupResumeSlot *>(storage);
            if (slot->active) {
                if (g_gameState.loading) {
                    suspendModelGroupSlot(slot);
                    slot->dirty = 1;
                } else if (slot->dirty) {
                    if (slot->visible)
                        showModelGroupSlot(slot);
                    else
                        suspendModelGroupSlot(slot);
                    nodeSetTranslation(slot->model->node, 0, slot->position);
                    modelPartSetRotationDegrees(slot->model->node, 0, 0.0f, slot->yaw, 0.0f);
                    if (slot->model->node->currentMotion != slot->animation)
                        modelSelectPrimaryMotion(slot->model->node, slot->animation, 0.0f);
                    slot->dirty = 0;
                }
            }
        }
    }
}
