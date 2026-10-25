#include "mobiclip/MoLivePlayer.h"
#include "mobiclip/MoLiveObjectHandleMap.h"

using namespace MoLive;

/* Clears the active flag of every stream that was used; streams with nothing queued and not
 * active are removed from the player. */
void MoLivePlayer::releaseIdleStreams()
{
    ObjectHandleMap::iterator it = streams.begin();
    while (it != streams.end()) {
        ObjectHandleMap::iterator current = it;
        ++it;
        Stream *stream = static_cast<StreamEntry *>(current->second.object)->stream;
        if (stream->active != 0 || stream->queue.count != 0) {
            stream->active = 0;
        } else {
            streams.erase(current);
        }
    }
}
