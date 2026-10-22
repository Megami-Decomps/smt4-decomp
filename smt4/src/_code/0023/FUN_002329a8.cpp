/* NON_MATCHING: retail shares a VFP zero across translation and rotation; this source uses an integer aggregate initialization. */
#include "shard/S1Mover.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"

struct CloneRenderState {
    u8 unk000[0x1f6];
    u8 enabled; // 0x1f6
};
// The render pointer is just past the shared AsdMdlNode prefix.
struct CloneNode {
    u8 unk00[0x2c];
    CloneRenderState *render; // 0x2c
};
struct ModelCloneOwner {
    u8 unk00[8];
    u8 flags; // 0x08
    u8 unk09[0x63];
    AsdMdlObject *model; // 0x6c
};
extern "C" {
AsdMdlObject *asdMdlManagerClone(u32 source, u32 flags);
void FUN_002a0428(AsdMdlObject *model, u32 enabled);
void nodeSetTranslation(AsdMdlNode *node, s32 index, const Vec3f *translation);
void FUN_0028c618(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);
void nodeSetScale(AsdMdlNode *node, s32 index, f32 x, f32 y, f32 z);

// Clone and enable a model, resetting its root translation, rotation and scale.
void FUN_002329a8(ModelCloneOwner *owner, u32 source)
{
    owner->model = asdMdlManagerClone(source, 0);
    FUN_002a0428(owner->model, 1);
    AsdMdlObject *model = owner->model;
    model->flags &= ~2u;
    ((CloneNode *)model->node)->render->enabled = 1;
    owner->flags |= 2;
    Vec3f origin = {0.0f, 0.0f, 0.0f};
    nodeSetTranslation(owner->model->node, 0, &origin);
    FUN_0028c618(owner->model->node, 0, 0.0f, 0.0f, 0.0f);
    nodeSetScale(owner->model->node, 0, 1.0f, 1.0f, 1.0f);
}
}
