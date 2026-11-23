/* NON_MATCHING: after inlining animationSelectClip, only the two loads of the table's clip pointer differ (base r0 in retail, r1 in the build). */
#include "shard/W6_W6Match2_AnimationPlayback.h"

struct ModelClipTable {
    /* 0x00 */ u8 unk00[0x78];
    /* 0x78 */ AnimationClip **clips;
    /* 0x7C */ u16 count;
};

struct ModelResource {
    /* 0x00 */ u8 unk00[0x30];
    /* 0x30 */ ModelClipTable *table;
};

struct ModelResourceOwner {
    /* 0x00 */ u8 unk00[0x0c];
    /* 0x0C */ ModelResource resource;
};

struct AnimatedModel {
    /* 0x000 */ u8 unk000[0xb4];
    /* 0x0B4 */ AnimationSelection selection;
    /* 0x0D8 */ u8 unk0d8[0x134];
    /* 0x20C */ ModelResourceOwner *resources;
    /* 0x210 */ u32 mode;
    /* 0x214 */ u8 unk214[0x48];
    /* 0x25C */ void *effects;
};

extern "C" {

void motionPlayerStartBlended(AnimatedModel* model, u32 index, u8 flags, f32 time, f32 blend);
void moriModelUnitStartMaterialAnimation(AnimatedModel* model, u32 index, u8 flags, f32 time);
void FUN_0045adc0(AnimationPlayback* playback, AnimationClip* clip, u32 mode);
void modelEffectsSelect(void* effects, u32 index);

/* The body of animationSelectClip, inlined by retail. */
static __inline void selectClip(AnimatedModel *model, u32 index, u8 flags, f32 time)
{
    ModelResource *resource = model->resources != NULL ? &model->resources->resource : NULL;
    ModelClipTable *table = resource->table;
    if (index < table->count) {
        AnimationClip *clip = table->clips[index];
        if (clip != NULL) {
            AnimationSelection *selection = &model->selection;
            selection->index = index;
            selection->time = time;
            selection->clip = clip;
            FUN_0045adc0(&selection->playback, clip, model->mode);
            selection->flags = flags;
        }
    }
}

/* Starts both motion layers, selects the clip and applies the clip's effects. */
void modelPlayClip(AnimatedModel *model, u32 index, u8 flags, f32 time, f32 blend)
{
    motionPlayerStartBlended(model, index, flags, time, blend);
    moriModelUnitStartMaterialAnimation(model, index, flags, time);
    selectClip(model, index, flags, time);
    if (model->effects != NULL) {
        modelEffectsSelect(model->effects, index);
    }
}

} /* extern "C" */
