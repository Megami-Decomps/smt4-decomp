/* NON_MATCHING: index and flags swap callee-saved registers (r6/r7) and the clip count loads into r1 instead of r2. */
#include "shard/W6_W6Match2_AnimationPlayback.h"

struct ModelClipTable {
    u8 unk00[0x78];        // 0x00
    AnimationClip** clips; // 0x78
    u16 count;             // 0x7c
};

struct ModelResource {
    u8 unk00[0x30];        // 0x00
    ModelClipTable* table; // 0x30
};

struct ModelResourceOwner {
    u8 unk00[0x0c];         // 0x00
    ModelResource resource; // 0x0c
};

struct AnimatedModel {
    u8 unk000[0xb4];               // 0x000
    AnimationSelection selection;  // 0x0b4
    u8 unk0d8[0x134];              // 0x0d8
    ModelResourceOwner* resources; // 0x20c
    u32 mode;                      // 0x210
    u8 unk214[0x48];               // 0x214
    void* effects;                 // 0x25c
};

extern "C" {

void FUN_003fd924(AnimatedModel* model, u32 index, u8 flags, f32 time, f32 blend);
void FUN_003fd7c0(AnimatedModel* model, u32 index, u8 flags, f32 time);
void FUN_0045adc0(AnimationPlayback* playback, AnimationClip* clip, u32 mode);
void modelEffectsSelect(void* effects, u32 index);

// Plays clip `index` on the model: starts both motion layers, selects the clip and its effects.
void FUN_003fe86c(AnimatedModel* model, u32 index, u8 flags, f32 time, f32 blend)
{
    FUN_003fd924(model, index, flags, time, blend);
    FUN_003fd7c0(model, index, flags, time);

    ModelResource* resource = model->resources != NULL ? &model->resources->resource : NULL;
    ModelClipTable* table = resource->table;
    if (index < table->count) {
        AnimationClip* clip = table->clips[index];
        if (clip != NULL) {
            AnimationSelection* selection = &model->selection;
            selection->index = index;
            selection->time = time;
            selection->clip = clip;
            FUN_0045adc0(&selection->playback, clip, model->mode);
            selection->flags = flags;
        }
    }
    if (model->effects != NULL) {
        modelEffectsSelect(model->effects, index);
    }
}

} /* extern "C" */
