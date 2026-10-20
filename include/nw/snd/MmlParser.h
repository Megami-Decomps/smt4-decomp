#ifndef NW_SND_MMLPARSER_H
#define NW_SND_MMLPARSER_H

#include "common.h"

namespace nw {
namespace snd {
namespace internal {
namespace driver {

struct SequenceTrack;

/* The MML sequence parser (vtable 0x421ef4 in smt4; the two slots before Parse are the
 * destructor's). */
class MmlParser {
public:
    virtual ~MmlParser();
    virtual void Parse();   /* +0x08: FUN_003e738c, the command loop */
    virtual void NoteOnCommandProc(SequenceTrack *track, s32 key, s32 velocity, s32 length, s32 tie);   /* +0x0C */
};

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw

#endif
