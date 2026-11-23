#include <stdio.h>
#include "gfx/NamedEffectAttachment.h"
#include "gfx/QuaternionWorkspace.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "nw/math/MTX33.h"
#include "gamedata/GameDataAccess.h"

extern "C" {
static const char s_jointNameFormat[] = "h_eff%02d";
void memClearWords(void *destination, u32 size);
u32 FUN_0019f30c(AsdMdlNode *node, const char *name, RotationQuaternion *rotation);
void skelNodePoseChain(void *effect, const EffectAttachmentPosition *position);
void effectTimelinePartApplyRotation(void *effect, const RotationQuaternion *rotation);
void effectParticleEmitterSetAdvance(void *effect, f32 scale);
void effectNodeUpdateTransform(void *effect);

// Place each effect at its named model joint, with conjugate rotation and model scale.
void FUN_001881e8(AsdMdlObject *model, NamedEffectAttachment *attachments)
{
    struct NodeScaleView {
        u8 prefix[0x1F0];
        f32 scale;
    };
    EffectAttachmentPosition position;
    char name[32];
    nw::math::VEC3 jointPosition;
    RotationQuaternion rotation;
    RotationQuaternion inverse;
    position.w = 1.0f;
    AsdMdlNode *node = model->node;
    if (attachments->count != 0) {
        for (s32 index = 0; index < attachments->count; ++index) {
            EffectJointEntry *entry = attachments->entries[index];
            void *effect = entry->effect;
            memClearWords(name, sizeof(name));
            sprintf(name, s_jointNameFormat, entry->index);
            if (lookupNameEntry(node, reinterpret_cast<u32>(name), reinterpret_cast<u32 *>(&jointPosition))) {
                position.x = jointPosition.x;
                position.y = jointPosition.y;
                position.z = jointPosition.z;
                skelNodePoseChain(effect, &position);
                FUN_0019f30c(node, name, &rotation);
                inverse.x = -rotation.x;
                inverse.y = -rotation.y;
                inverse.z = -rotation.z;
                inverse.w = rotation.w;
                effectTimelinePartApplyRotation(effect, &inverse);
                const NodeScaleView *scaledNode = reinterpret_cast<const NodeScaleView *>(node);
                effectParticleEmitterSetAdvance(effect, scaledNode->scale);
                effectNodeUpdateTransform(effect);
            }
        }
    }
}
}
