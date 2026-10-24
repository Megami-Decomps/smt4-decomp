/* NON_MATCHING: readable rebuild of the keyframe lookup that plays an animation at a time; retail zero-initialises the two result vectors on the stack up front and keeps the interpolation in s-registers across the compares, and the scan/compare of the frame time (int to float per key) is scheduled differently by armcc. */
#include "common.h"

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

struct AnimSetInfo {
    /* 0x00 */ u8 unk00[0xE];
    /* 0x0E */ u16 animCount;
};

/* An animation set. */
struct AnimSet {
    /* 0x00 */ u8 unk00[0x10];
    /* 0x10 */ AnimSetInfo *info;
    /* 0x14 */ u8 unk14[0xC];
    /* 0x20 */ AnimKey *keys;
    /* 0x24 */ AnimRange *ranges;
};

extern "C" {
void FUN_0023e024(AnimSet *set, s32 key, u32 a, u32 b, f32 c);
void FUN_0033d42c(AnimSet *set, s32 key, u32 a, u32 b, f32 c, f32 *position, f32 *scale, f32 d);

/* Looks up animation `index` of the set at `time` (interpolating between the two surrounding keys)
 * and plays the resulting key, with the interpolated position and scale when `placed` is set. */
void FUN_0033f3a0(AnimSet *set, s32 index, u32 a, u32 b, f32 time, f32 c, s32 placed, f32 d)
{
    if (index >= set->info->animCount)
        return;
    f32 position[2] = { 0.0f, 0.0f };
    f32 scale[2] = { 0.0f, 0.0f };
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
            position[0] = current->position[0];
            position[1] = current->position[1];
            scale[0] = current->scale[0];
            scale[1] = current->scale[1];
        } else {
            AnimKey *previous = current - 1;
            f32 ratio = (time - (f32)previous->time) / (f32)(current->time - previous->time);
            key = previous->id;
            position[0] = previous->position[0] + ratio * (current->position[0] - previous->position[0]);
            position[1] = previous->position[1] + ratio * (current->position[1] - previous->position[1]);
            scale[0] = previous->scale[0] + ratio * (current->scale[0] - previous->scale[0]);
            scale[1] = previous->scale[1] + ratio * (current->scale[1] - previous->scale[1]);
        }
        found = key >= 0;
        break;
    }
    if (!found) {
        AnimKey *end = &set->keys[last];
        key = end->id;
        position[0] = end->position[0];
        position[1] = end->position[1];
        scale[0] = end->scale[0];
        scale[1] = end->scale[1];
    }
    scale[0] *= 0.01f;
    scale[1] *= 0.01f;
    if (placed == 0)
        FUN_0023e024(set, key, a, b, c);
    else
        FUN_0033d42c(set, key, a, b, c, position, scale, d);
}

} /* extern "C" */
