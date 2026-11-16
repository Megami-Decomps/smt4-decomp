#include "nw/snd/MmlParser.h"

extern "C" void nw_snd_internal_driver_SequenceTrack_NoteOn(nw::snd::internal::driver::SequenceTrack *track, s32 key, s32 velocity,
                             s32 length, s32 tie);

namespace nw {
namespace snd {
namespace internal {
namespace driver {

/* Forwards the note-on command to the shared note-on handler, which has no use for `this`. */
void MmlParser::NoteOnCommandProc(SequenceTrack *track, s32 key, s32 velocity, s32 length, s32 tie)
{
    nw_snd_internal_driver_SequenceTrack_NoteOn(track, key, velocity, length, tie);
}

} // namespace driver
} // namespace internal
} // namespace snd
} // namespace nw
