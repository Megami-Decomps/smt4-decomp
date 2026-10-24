/* NON_MATCHING: group loop selection, saved registers and animation comparison loads differ. */
#include "gfx/ModelGroups.h"
#include "map/mapDepart.h"
#include "shard/W6_W6Match3_NodeEnable.h"
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
/* The node's animation lies beyond the shared node prefix. */
struct ModelResumeNode {
    AsdMdlNode node;
    u8 unk30[8];
    s32 animation;
};
typedef char ModelGroupResumeOffsets[(sizeof(ModelGroupResumeSlot) == 0x2C && offsetof(ModelGroupResumeSlot, animation) == 0x14 && offsetof(ModelResumeNode, animation) == 0x38) ? 1 : -1];
extern "C" {
extern ModelGroups *DAT_00581270;
extern GameStateA g_gameState;
void FUN_0029570c(void);
void faderSetValue(AsdMdlNode *node, f32 value);
void nodeSetTranslation(AsdMdlNode *node, s32 mode, const f32 *position);
void FUN_0036bb1c(AsdMdlNode *node, s32 mode, f32 x, f32 y, f32 z);
void FUN_001ac2d4(AsdMdlNode *node, s32 animation, f32 blend);
}
static inline void suspendModelGroupSlot(ModelGroupResumeSlot *slot)
{
    AsdMdlObject *model = slot->model;
    if (!(model->flags & 2)) {
        model->flags |= 2;
        model->node->resource->positionFollowed = 0;
        faderSetValue(slot->model->node, 0.0f);
    }
}
static inline void showModelGroupSlot(ModelGroupResumeSlot *slot)
{
    AsdMdlObject *model = slot->model;
    if (model->flags & 2) {
        model->flags &= ~2;
        model->node->resource->positionFollowed = 1;
        faderSetValue(slot->model->node, 1.0f);
    }
}
extern "C" void FUN_002d8cec(void)
{
    if (reinterpret_cast<const ModelGroupsModeView *>(DAT_00581270)->mode != 22)
        return;
    FUN_0029570c();
    for (s32 group = 0; group < 2; ++group) {
        s32 count = group == 0 ? 9 : 3;
        for (s32 i = 0; i < count; ++i) {
            ModelGroupSlot *storage = group == 0 ? &DAT_00581270->primary[i] : &DAT_00581270->secondary[i];
            ModelGroupResumeSlot *slot = reinterpret_cast<ModelGroupResumeSlot *>(storage);
            if (slot->active) {
                if (g_gameState.controllerFlags.secondary) {
                    suspendModelGroupSlot(slot);
                    slot->dirty = 1;
                } else if (slot->dirty) {
                    if (slot->visible)
                        showModelGroupSlot(slot);
                    else
                        suspendModelGroupSlot(slot);
                    nodeSetTranslation(slot->model->node, 0, slot->position);
                    FUN_0036bb1c(slot->model->node, 0, 0.0f, slot->yaw, 0.0f);
                    if (reinterpret_cast<ModelResumeNode *>(slot->model->node)->animation != slot->animation)
                        FUN_001ac2d4(slot->model->node, slot->animation, 0.0f);
                    slot->dirty = 0;
                }
            }
        }
    }
}
