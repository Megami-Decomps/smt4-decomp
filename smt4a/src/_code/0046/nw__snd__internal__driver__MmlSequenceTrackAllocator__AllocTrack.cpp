#include "nw/snd/MmlSequenceTrackAllocator.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* The track fields the allocator fills in. */
struct SequenceTrack {
    /* 0x000 */ u8 unk000[0x12C];
    /* 0x12C */ void *player;     /* the sound player the track plays for */
    /* 0x130 */ u8 unk130[4];
    /* 0x134 */ void *userData;   /* the allocator's userData */
};

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw

extern "C" {
void *nw_snd_internal_PoolImpl_AllocImpl(void *pool);
nw::snd::internal::driver::SequenceTrack *constructTrackBase(void *memory);   /* constructs a track in `memory` */
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

    if (track != NULL && (track = constructTrackBase(track)) != NULL) {
        track->player = player;
        track->userData = userData;
    }
    return track;
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
