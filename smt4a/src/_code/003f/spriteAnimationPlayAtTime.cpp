/* NON_MATCHING: 28 lines. Left: retail loads the range's first key into the loop counter's register and copies it for the first-key test (this build the other way round), converts the previous key's time before the span, and multiplies the differences as ratio * difference. */
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
    /* 0x20 */ AnimKey *keys;
    /* 0x24 */ AnimRange *ranges;
};

extern "C" {

/* Looks up animation `index` of the set at `time` (interpolating between the two surrounding keys)
 * and plays the resulting key, applying interpolated placement when options.positioned is set. */
void spriteAnimationPlayAtTime(SpriteDrawOwner *owner, s32 index, const SpriteDrawVector3 *placement,
                  u32 flags, s32 filter, s32 positioned, s32 flipY, f32 time, f32 globalScale)
{
    AnimSet *set = static_cast<AnimSet *>(owner);
    if (index >= set->origin->animationCount)
        return;
    SpriteDrawVector2 position(0.0f, 0.0f);
    SpriteDrawVector2 keyScale(100.0f, 100.0f);
    s32 first = set->ranges[index].first;
    s32 last = first + set->ranges[index].count - 1;
    s32 key = -1;
    for (s32 i = first; i <= last; i++) {
        if (time <= (f32)set->keys[i].time) {
            if (time == (f32)set->keys[i].time || first == i) {
                key = set->keys[i].id;
                position.x = set->keys[i].position[0];
                position.y = set->keys[i].position[1];
                keyScale.x = set->keys[i].scale[0];
                keyScale.y = set->keys[i].scale[1];
            } else {
                f32 ratio = (time - (f32)set->keys[i - 1].time) / (f32)(set->keys[i].time - set->keys[i - 1].time);
                key = set->keys[i - 1].id;
                /* previous + (current - previous) * ratio, a step at a time */
                position.x = set->keys[i].position[0] - set->keys[i - 1].position[0];
                position.y = set->keys[i].position[1] - set->keys[i - 1].position[1];
                keyScale.x = set->keys[i].scale[0] - set->keys[i - 1].scale[0];
                keyScale.y = set->keys[i].scale[1] - set->keys[i - 1].scale[1];
                position.x = ratio * position.x;
                position.y = ratio * position.y;
                keyScale.x = ratio * keyScale.x;
                keyScale.y = ratio * keyScale.y;
                position.x = set->keys[i - 1].position[0] + position.x;
                position.y = set->keys[i - 1].position[1] + position.y;
                keyScale.x = set->keys[i - 1].scale[0] + keyScale.x;
                keyScale.y = set->keys[i - 1].scale[1] + keyScale.y;
            }
            break;
        }
    }
    if (key < 0) {
        key = set->keys[last].id;
        position.x = set->keys[last].position[0];
        position.y = set->keys[last].position[1];
        keyScale.x = set->keys[last].scale[0];
        keyScale.y = set->keys[last].scale[1];
    }
    keyScale.x *= 0.01f;
    keyScale.y *= 0.01f;
    if (positioned == 0)
        spriteDrawPartGroup(set, key, placement, flags, filter, globalScale);
    else
        FUN_003fad14(set, key, placement, flags, filter, &position, &keyScale,
                     flipY, globalScale);
}

} /* extern "C" */
