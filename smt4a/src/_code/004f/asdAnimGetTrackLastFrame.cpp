#include "common.h"

struct TrackHeader {
    u8 unk00[0x0e]; // 0x00
    u16 count;       // 0x0e
};
struct TrackRange {
    u16 first;
    u16 count;
};
struct TrackKey {
    u32 unk00; // 0x00
    s32 frame; // 0x04
    u8 unk08[0x10]; // 0x08
};
struct AnimationTracks {
    u8 unk00[0x10]; // 0x00
    TrackHeader* header; // 0x10
    u8 unk14[0x0c]; // 0x14
    TrackKey* keys; // 0x20
    TrackRange* ranges; // 0x24
};

// Returns the last key's frame for an existing animation track.
extern "C" f32 asdAnimGetTrackLastFrame(const AnimationTracks* animation, s32 track)
{
    f32 frame = 0.0f;
    if (animation->header != NULL && track < animation->header->count) {
        s32 last = animation->ranges[track].first + animation->ranges[track].count - 1;
        frame = static_cast<f32>(animation->keys[last].frame);
    }
    return frame;
}
