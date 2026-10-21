/* NON_MATCHING: live-parent search block placement, pointer registers, and the first translation load order differ from retail. */
#include "common.h"

struct AttachedModel {
    u8 unk00[8];
    u32 model; /* 0x08 */
};
struct AttachmentOffset {
    f32 x, y, z;
};
struct ModelAttachment {
    AttachedModel *object; /* 0x00 */
    s32 parentId;         /* 0x04 */
    u32 unk08;
    f32 blend;            /* 0x0c */
    AttachmentOffset offset; /* 0x10 */
    u8 unk1c[8];
    u32 flags;            /* 0x24 */
};
struct ModelParent {
    s32 id;
    u32 unk04;
    u8 transform[0x24]; /* 0x08 */
    u32 flags;         /* 0x2c */
};
struct AttachedModelState {
    u8 unk000[0x190];
    ModelAttachment attachments[50]; /* 0x190 */
    u8 unk960[0xa38];
    ModelParent parents[50]; /* 0x1398 */
};
struct ModelPose {
    u8 data[0x208];
};
struct ModelPosition {
    f32 x, y, z;
};

extern "C" {
void FUN_0023aa3c(void *transform, ModelPosition *position, f32 blend);
void enemyDrawComputeSpriteAnchorOffset(void *transform, AttachmentOffset *translation, f32 blend);
void modelSetPosition(u32 model, s32 node, const ModelPosition *position);
void nodeSetTranslation(u32 model, s32 node, const AttachmentOffset *translation);
void FUN_003108b0(ModelPose *pose, AttachedModel *object);
void FUN_0032360c(AttachedModel *object, void *transform, ModelPose *pose);

// Resolve each enabled attachment against a live parent and copy its model transform.
u32 modelAttachmentsUpdateFromParents(AttachedModelState *state)
{
    ModelPose pose;
    AttachmentOffset translation;
    ModelPosition position;
    for (s32 index = 0; index < 50; ++index) {
        ModelAttachment *attachment = &state->attachments[index];
        if ((attachment->flags & 2) != 0) {
            s32 parent = 0;
            while (state->parents[parent].id != attachment->parentId ||
                   (state->parents[parent].flags & 1) == 0) {
                ++parent;
                if (parent >= 50) {
                    return 0;
                }
            }
            for (parent = 0; parent < 50; ++parent) {
                ModelParent *source = &state->parents[parent];
                if (source->id == attachment->parentId) {
                    FUN_0023aa3c(source->transform, &position, attachment->blend);
                    modelSetPosition(attachment->object->model, 0, &position);
                    enemyDrawComputeSpriteAnchorOffset(source->transform, &translation, attachment->blend);
                    translation.x += attachment->offset.x;
                    translation.y += attachment->offset.y;
                    translation.z += attachment->offset.z;
                    nodeSetTranslation(attachment->object->model, 0, &translation);
                    FUN_003108b0(&pose, attachment->object);
                    FUN_0032360c(attachment->object, source->transform, &pose);
                    break;
                }
            }
        }
    }
    return 1;
}
}
