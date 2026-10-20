#ifndef NW_SND_MMLSEQUENCETRACKALLOCATOR_H
#define NW_SND_MMLSEQUENCETRACKALLOCATOR_H

#include "common.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

struct SequenceTrack;

/* Hands the MML parser its sequence tracks out of a pool (vtable 0x421ec4 in smt4; the two slots
 * before AllocTrack are the destructor's). */
class MmlSequenceTrackAllocator {
public:
    virtual ~MmlSequenceTrackAllocator();
    virtual SequenceTrack *AllocTrack(void *player);   /* +0x08 */
    virtual void FreeTrack(SequenceTrack *track);      /* +0x0C */

private:
    /* 0x00: vtable pointer */
    /* 0x04 */ void *userData;   /* copied into every track allocated */
    /* 0x08 */ u8 pool[1];       /* PoolImpl the tracks come from */
};

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw

#endif
