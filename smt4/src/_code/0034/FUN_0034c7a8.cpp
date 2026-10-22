/* NON_MATCHING: retail reloads translation.y/z together (`vldmia`) at the top of each node iteration; armcc reloads each just before its store. */
#include "common.h"

struct SpriteAnchorVec3 {
    /* 0x00 */ f32 x;
    /* 0x04 */ f32 y;
    /* 0x08 */ f32 z;
};

/* A model node's local transform: a 3x4 matrix and its dirty flags. */
struct SpriteNodeTransform {
    /* 0x00 */ f32 matrix[3][4];
    /* 0x30 */ u8 unk30[0xc];
    /* 0x3C */ u32 flags;      /* 0x800: matrix changed */
};

struct SpriteModelNode {
    /* 0x00 */ u8 unk00[0x4c];
    /* 0x4C */ SpriteNodeTransform transform;
};

struct SpriteModelSkeleton {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ SpriteModelNode **nodes;
};

struct SpriteModel {
    /* 0x00 */ u8 unk00[8];
    /* 0x08 */ SpriteModelSkeleton *skeleton;
};

struct AnchoredSprite {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ void *placement;
    /* 0x08 */ SpriteModel *model;
    /* 0x0C */ u8 unk0c[0x24];
    /* 0x30 */ f32 scale;
    /* 0x34 */ SpriteAnchorVec3 position;
};

extern "C" {

void enemyDrawComputeSpriteAnchorOffset(void *placement, SpriteAnchorVec3 *offset, f32 scale);

/* Move the sprite to position, placing its first three model nodes at position plus the anchor offset. */
void FUN_0034c7a8(AnchoredSprite *sprite, const SpriteAnchorVec3 *position)
{
    sprite->position.x = position->x;
    sprite->position.y = position->y;
    sprite->position.z = position->z;
    if (sprite->placement == NULL) {
        return;
    }
    SpriteAnchorVec3 translation;
    enemyDrawComputeSpriteAnchorOffset(sprite->placement, &translation, sprite->scale);
    translation.x += sprite->position.x;
    translation.y += sprite->position.y;
    translation.z += sprite->position.z;
    if (sprite->model == NULL) {
        return;
    }
    for (s32 i = 0; i < 3; ++i) {
        SpriteNodeTransform *transform = &sprite->model->skeleton->nodes[i]->transform;
        transform->matrix[0][3] = translation.x;
        transform->matrix[1][3] = translation.y;
        transform->matrix[2][3] = translation.z;
        transform->flags |= 0x800;
    }
}

} /* extern "C" */
