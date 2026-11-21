/* NON_MATCHING: retail guards the loop with one load of the map header (begin and end from the same load, the store
   constants set under that test) where armcc reloads it, and the stream/data pointers are swapped between r5 and r6. */
#include "mobiclip/MoLivePlayer.h"

using namespace MoLive;

/* Queues the data every stream is working on and hands the stream a fresh handle; false when a queue refuses. */
bool MoLivePlayer::flushPending()
{
    bool queued = true;
    ObjectHandleMap::iterator it = streams.begin();
    while (it != streams.end()) {
        Stream *stream = static_cast<StreamEntry *>(it->second.object)->stream;
        StreamData *data = static_cast<StreamData *>(stream->current.object);
        if (data != NULL && data->size != 0) {
            const ObjectHandle *first = &stream->current;
            const ObjectHandle *last = first + 1;
            if (!stream->queue.insert(first, last)) {
                queued = false;
            }
            stream->current.detach();
            data->ready = 1;
        }
        ++it;
    }
    return queued;
}
