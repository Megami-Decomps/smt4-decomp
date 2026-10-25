/* NON_MATCHING: position/result stack slots are exchanged and the initial constant store is scheduled later. */
#include "gfx/NamedEffectAttachment.h"
#include "gfx/QuaternionWorkspace.h"
#include "AsdSDK/Source/Gfx/Model/AsdMdlManager.h"
#include "nw/math/MTX33.h"
#include "util/LookupNameEntry.h"

extern "C" {
extern const char DAT_0052607c[];
void memClearWords(void *destination, u32 size);
s32 textFormatBuffer(char *destination, const char *format, ...);
u32 FUN_0019f30c(AsdMdlNode *node, const char *name, RotationQuaternion *rotation);
void FUN_001b4eb8(void *effect, const EffectAttachmentPosition *position);
void FUN_001acb48(void *effect, const RotationQuaternion *rotation);
void FUN_001ac8ec(void *effect, f32 scale);
void FUN_0019c0e0(void *effect);

// Place each effect at its named model joint, with conjugate rotation and model scale.
void FUN_001881e8(AsdMdlObject *model, NamedEffectAttachment *attachments)
{
    struct NodeScaleView {
        u8 prefix[0x1F0];
        f32 scale;
    };
    EffectAttachmentPosition position;
    position.w = 1.0f;
    AsdMdlNode *node = model->node;
    if (attachments->count != 0) {
        for (s32 index = 0; index < attachments->count; ++index) {
            EffectJointEntry *entry = attachments->entries[index];
            void *effect = entry->effect;
            char name[32];
            memClearWords(name, sizeof(name));
            textFormatBuffer(name, DAT_0052607c, entry->index);
            nw::math::VEC3 jointPosition;
            if (lookupNameEntry(node, reinterpret_cast<u32>(name), reinterpret_cast<u32 *>(&jointPosition))) {
                position.x = jointPosition.x;
                position.y = jointPosition.y;
                position.z = jointPosition.z;
                FUN_001b4eb8(effect, &position);
                RotationQuaternion rotation;
                FUN_0019f30c(node, name, &rotation);
                RotationQuaternion inverse;
                inverse.x = -rotation.x;
                inverse.y = -rotation.y;
                inverse.z = -rotation.z;
                inverse.w = rotation.w;
                FUN_001acb48(effect, &inverse);
                const NodeScaleView *scaledNode = reinterpret_cast<const NodeScaleView *>(node);
                FUN_001ac8ec(effect, scaledNode->scale);
                FUN_0019c0e0(effect);
            }
        }
    }
}
}
