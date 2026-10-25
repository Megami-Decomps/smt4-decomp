/* NON_MATCHING: readable rebuild of the keyframe lookup that plays an animation at a time; retail zero-initialises the two result vectors on the stack up front and keeps the interpolation in s-registers across the compares, and the scan/compare of the frame time (int to float per key) is scheduled differently by armcc. */
#include "shard/W6_W6Match8_AnimatedSprite.h"

/* One keyframe (0x18 bytes). */
struct AnimKey {
    /* 0x00 */ s32 id;
    /* 0x04 */ s32 time;
    /* 0x08 */ f32 position[2];
    /* 0x10 */ f32 scale[2];     /* percent */
};

/* The first key and key count of one animation. */
struct AnimRange {
    u16 first;
    u16 count;
};


/* An animation set. */
struct AnimSet : SpriteDrawOwner {
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ AnimKey *keys;
    /* 0x24 */ AnimRange *ranges;
};

extern "C" {

/* Looks up animation `index` of the set at `time` (interpolating between the two surrounding keys)
 * and plays the resulting key, applying interpolated placement when options.positioned is set. */
void FUN_003fd140(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *placement,
                  u32 flags, SpriteDrawOptions options, f32 time, f32 globalScale)
{
    AnimSet *set = static_cast<AnimSet *>(owner);
    if (index >= set->origin->animationCount)
        return;
    SpriteDrawVector2 position = {0.0f, 0.0f};
    SpriteDrawVector2 keyScale = {0.0f, 0.0f};
    s32 first = set->ranges[index].first;
    s32 last = first + set->ranges[index].count - 1;
    s32 key = 0;
    bool found = false;
    for (s32 i = first; i <= last; i++) {
        AnimKey *current = &set->keys[i];
        if (time > (f32)current->time)
            continue;
        if (time == (f32)current->time || i == first) {
            key = current->id;
            position.x = current->position[0];
            position.y = current->position[1];
            keyScale.x = current->scale[0];
            keyScale.y = current->scale[1];
        } else {
            AnimKey *previous = current - 1;
            f32 ratio = (time - (f32)previous->time) / (f32)(current->time - previous->time);
            key = previous->id;
            position.x = previous->position[0] + ratio * (current->position[0] - previous->position[0]);
            position.y = previous->position[1] + ratio * (current->position[1] - previous->position[1]);
            keyScale.x = previous->scale[0] + ratio * (current->scale[0] - previous->scale[0]);
            keyScale.y = previous->scale[1] + ratio * (current->scale[1] - previous->scale[1]);
        }
        found = key >= 0;
        break;
    }
    if (!found) {
        AnimKey *end = &set->keys[last];
        key = end->id;
        position.x = end->position[0];
        position.y = end->position[1];
        keyScale.x = end->scale[0];
        keyScale.y = end->scale[1];
    }
    keyScale.x *= 0.01f;
    keyScale.y *= 0.01f;
    if (options.positioned == 0)
        FUN_004ff058(set, key, placement, flags, options.filter, globalScale);
    else
        FUN_003fad14(set, key, placement, flags, options.filter, &position, &keyScale,
                     options.flipY, globalScale);
}

} /* extern "C" */
