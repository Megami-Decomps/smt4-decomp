/* NON_MATCHING: the format byte writes directly at sync+0x15c; retail first addresses
 * the output queue at sync+0x158 and writes its byte at offset 4. */
#include "shard/S2MovieSync.h"
#include "shard/W6_W6Match7_MovieSource.h"

extern "C" {
s32 FUN_004232e0(void *queue, MovieSyncSource *source, const MovieSyncEntry *entry, void *buffer, u32 size);
/* Moves ready stream buffers into the output queue; reports when the queue could not be filled. */
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
    for (s32 stream = 0; stream < 2; ++stream) {
        if (sync->entryIndex[stream] >= 0) {
            MovieSyncEntry *entry = &sync->entries[sync->entryIndex[stream]];
            if (entry != NULL) {
                s32 slots = entry->type == 0 || entry->type == 1 ? 2 : 1;
                for (s32 slot = 0; slot < slots; ++slot) {
                    s32 bufferIndex = slot + stream * 2;
                    void *buffer = sync->output.buffers->getBuffer(bufferIndex);
                    if (buffer != NULL) {
                        sync->output.format = sync->io.sources[sync->entryIndex[stream]]->getFormat();
                        u32 size = sync->output.buffers->getBufferSize(bufferIndex);
                        if (!FUN_004232e0(&sync->output, sync->io.sources[sync->entryIndex[stream]],
                                &sync->entries[sync->entryIndex[stream]], buffer, size))
                            return 0;
                    }
                }
            }
        }
    }
    return 1;
}
} /* extern "C" */
