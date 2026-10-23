/* NON_MATCHING: state reload coalesces; queue format write and persistent loop registers differ. */
#include "shard/S2MovieSync.h"
#include "shard/W6_W6Match7_MovieSource.h"
#include <stddef.h>
class MovieOutputBuffers {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual void *getBuffer(s32 index) = 0;
    virtual u32 getBufferSize(s32 index) = 0;
};
struct MovieOutputView {
    u8 prefix[0x158];
    u32 queueState;
    u8 format;
    u8 unk15D[0x1BC - 0x15D];
    MovieOutputBuffers *buffers;
};
typedef char MovieOutputBuffersOffset[offsetof(MovieOutputView, buffers) == 0x1BC ? 1 : -1];
extern "C" {
s32 FUN_004232e0(void *queue, MovieSyncSource *source, const MovieSyncEntry *entry, void *buffer, u32 size);
u32 FUN_004252b0(MovieSync *sync)
{
    if (sync->state != 3 && sync->state != 8)
        return 0;
    for (s32 stream = 0; stream < 2; ++stream) {
        if (sync->entryIndex[stream] >= 0) {
            s32 available;
            sync->io.sources[sync->entryIndex[stream]]->getPosition(&available);
            if (movieSyncEntrySlots(sync, sync->entryIndex[stream]) > available)
                return 0;
        }
    }
    MovieOutputView *output = (MovieOutputView *)sync;
    for (s32 stream = 0; stream < 2; ++stream) {
        if (sync->entryIndex[stream] >= 0) {
            MovieSyncEntry *entry = &sync->entries[sync->entryIndex[stream]];
            if (entry != NULL) {
                s32 slots = entry->type == 0 || entry->type == 1 ? 2 : 1;
                for (s32 slot = 0; slot < slots; ++slot) {
                    s32 bufferIndex = slot + stream * 2;
                    void *buffer = output->buffers->getBuffer(bufferIndex);
                    if (buffer != NULL) {
                        output->format = sync->io.sources[sync->entryIndex[stream]]->getFormat();
                        u32 size = output->buffers->getBufferSize(bufferIndex);
                        if (!FUN_004232e0(&output->queueState, sync->io.sources[sync->entryIndex[stream]],
                                &sync->entries[sync->entryIndex[stream]], buffer, size))
                            return 0;
                    }
                }
            }
        }
    }
    return 1;
}
}
