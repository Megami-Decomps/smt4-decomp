/* NON_MATCHING: needs the rename of _ZN12MoLivePlayer18releaseIdleStreamsEv to _ZN12MoLivePlayer18releaseIdleStreamsEv; with it the body matches except the loop variable bookkeeping (retail keeps the current entry in r4 and copies it to r1 for the successor walk, then ends the erase path with two nop hints; the build holds the entry in r1 and copies the successor back). */
#include "mobiclip/MoLivePlayer.h"
#include "mobiclip/MoLiveObjectHandleMap.h"

using namespace MoLive;

/* Clears the active flag of every stream that was used; streams with nothing queued and not
 * active are removed from the player. */
void MoLivePlayer::releaseIdleStreams()
{
    ObjectHandleMap::iterator it = streams.begin();
    while (it != streams.end()) {
        ObjectHandleMap::iterator next = it;
        ++next;
        Stream *stream = static_cast<StreamEntry *>(it->second.object)->stream;
        if (stream->active != 0 || stream->queue.count != 0) {
            stream->active = 0;
        } else {
            streams.erase(it);
        }
        it = next;
    }
}
