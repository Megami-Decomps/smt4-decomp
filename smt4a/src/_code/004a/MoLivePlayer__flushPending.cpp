/* NON_MATCHING: needs the renames of _ZN12MoLivePlayer12flushPendingEv and _ZN6MoLive10RingBufferINS_12ObjectHandleEE6insertERKPKS1_S6_ (rename_S2.tsv); with them the body matches except loop shape and two registers: retail tests the map once before the loop and again at the bottom (constants r9/sl set conditionally in the preheader), the build jumps to a bottom test, and the stream/data pointers are swapped between r5 and r6. */
#include "mobiclip/MoLivePlayer.h"

using namespace MoLive;

/* Queues the data every stream is working on and hands the stream a fresh handle; false when a queue refuses. */
bool MoLivePlayer::flushPending()
{
    bool queued = true;
    for (ObjectHandleMap::iterator it = streams.begin(); it != streams.end(); ++it) {
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
    }
    return queued;
}
