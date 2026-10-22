/* NON_MATCHING: restored the live frame argument in s0, but resource-table loads and temporary matrix registers still differ. */
#include "common.h"

struct PoseVector { f32 x, y, z; };
struct PoseMatrix {
    f32 basis[6];
    PoseVector translation;
};
struct PoseLayer {
    u32 unk00;
    PoseMatrix matrix; // 0x04
    u8 unk28[8];
    PoseVector *reference; // 0x30
};
struct PoseAnimation {
    u8 unk00[0x0c];
    void **tracks; // 0x0c
    u8 unk10[0x0a];
    u8 track; // 0x1a
};
struct PoseBank {
    u8 unk00[0x48];
    PoseLayer **layers; // 0x48
    u8 unk4c[0x44];
    PoseAnimation **animations; // 0x90
};
struct PoseResource {
    u8 unk00[0x34];
    PoseBank *bank; // 0x34
};
struct AnimatedPoseOwner {
    u32 unk00;
    s32 layer; // 0x04
    u8 unk08[0x58c];
    PoseResource *resource; // 0x594
    s32 animation; // 0x598
    u8 unk59c[0x18];
    PoseVector translation; // 0x5b4
    PoseVector reference; // 0x5c0
};

extern "C" {
void FUN_001986c4(void *track, PoseMatrix *matrix, f32 frame);
void FUN_00407598(AnimatedPoseOwner *owner);

// Evaluate the selected pose layer and update its translation and reference vector.
void FUN_0040738c(AnimatedPoseOwner *owner, f32 frame)
{
    s32 animation = owner->animation;
    if (animation < 0) animation = 0;
    PoseBank *bank = owner->resource->bank;
    PoseAnimation *selection = bank->animations[animation];
    PoseLayer *layer = bank->layers[owner->layer];
    const PoseVector *reference = layer->reference;
    PoseMatrix matrix = layer->matrix;
    if (selection->track != 0xff) {
        FUN_001986c4(selection->tracks[selection->track], &matrix, frame);
    }
    owner->translation = matrix.translation;
    owner->reference = *reference;
    FUN_00407598(owner);
}
}
