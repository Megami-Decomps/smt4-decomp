#include "nw/snd/MmlSequenceTrackAllocator.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* The track fields the allocator fills in. */
struct SequenceTrack {
    /* 0x00 */ u8 unk00[0xC0];
    /* 0xC0 */ void *player;     /* the sound player the track plays for */
    /* 0xC4 */ u8 unkC4[4];
    /* 0xC8 */ void *userData;   /* the allocator's userData */
};

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw

extern "C" {
void *nw_snd_internal_PoolImpl_AllocImpl(void *pool);
nw::snd::internal::driver::SequenceTrack *FUN_0037e730(void *memory);   /* constructs a track in `memory` */
}

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* Takes a slot from the pool, constructs a track in it for `player` and returns it, or NULL when the
 * pool is empty. */
SequenceTrack *MmlSequenceTrackAllocator::AllocTrack(void *player)
{
    SequenceTrack *track = (SequenceTrack *)nw_snd_internal_PoolImpl_AllocImpl(pool);

    if (track != NULL && (track = FUN_0037e730(track)) != NULL) {
        track->player = player;
        track->userData = userData;
    }
    return track;
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
