#include "shard/W6_W6Match2_AnimationPlayback.h"


struct AnimationClipTable {
    u8 unk00[0x78];       // 0x00
    AnimationClip** clips; // 0x78
    u16 count;             // 0x7c
};

struct AnimationResource {
    u8 unk00[0x30];          // 0x00
    AnimationClipTable* table; // 0x30
};

struct AnimationResourceOwner {
    u8 unk00[0x0c];       // 0x00
    AnimationResource resource; // 0x0c
};


struct AnimatedObject {
    u8 unk000[0xb4];        // 0x000
    AnimationSelection selection; // 0x0b4
    u8 unk0d8[0x134];       // 0x0d8
    AnimationResourceOwner* resources; // 0x20c
    u32 mode;                // 0x210
};

extern "C" void FUN_0045adc0(AnimationPlayback* playback, AnimationClip* clip, u32 mode);

// Select an available clip, initialize its playback and apply the requested flags.
extern "C" void animationSelectClip(AnimatedObject* object, u32 index, u8 flags, f32 time)
{
    AnimationResource* resource = object->resources != NULL ? &object->resources->resource : NULL;
    AnimationClipTable* table = resource->table;
    if (index < table->count) {
        AnimationClip* clip = table->clips[index];
        if (clip != NULL) {
            AnimationSelection* selection = &object->selection;
            selection->index = index;
            selection->time = time;
            selection->clip = clip;
            FUN_0045adc0(&selection->playback, clip, object->mode);
            selection->flags = flags;
        }
    }
}
