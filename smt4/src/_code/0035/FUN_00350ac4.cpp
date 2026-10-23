/* NON_MATCHING: sleep-loop constant hoisting and current-stream pointer register allocation differ. */
#include "mobiclip_ctrl/MovieStreamSelection.h"
extern "C" void threadSleepDuration(s64 nanoseconds);

/* Select a movie stream after the packet worker finishes its current operation. */
extern "C" s32 FUN_00350ac4(void *player, s32 index)
{
    /* Local view: flags lie beyond the shared MoviePacketPump prefix. */
    struct SelectionView {
        u8 unk000[0x14];
        u32 context;
        u8 unk018[0x1A0];
        MovieStreamBackend *backend;
        u32 unk1BC;
        MoviePacketConsumer *consumer;
        u8 unk1C4[0x2C0];
        s32 streamCount;
        MoviePacketFilter *filters[MOVIE_SYNC_ENTRIES];
        MoviePacketStream streams[MOVIE_SYNC_ENTRIES];
        u32 handles[MOVIE_SYNC_ENTRIES];
        s32 current;
        u8 prepared;
        u8 unk54D[3];
        u32 flags;
    };
    SelectionView *work = static_cast<SelectionView *>(player);
    if (index < -1 || index >= work->streamCount)
        return 0;
    if (work->current != index) {
        if (work->consumer == NULL) {
            work->flags |= 0x1000;
            return 0;
        }
        while (work->prepared == 1)
            threadSleepDuration(500000);
        s32 previous = work->current;
        if (previous != index && previous >= 0) {
            work->backend->closeStream(work->context, work->filters[previous]);
            work->filters[work->current] = NULL;
            work->current = -1;
        }
        if (index >= 0) {
            work->backend->openStream(work->context, &work->streams[index], &work->filters[index]);
            work->current = index;
        }
    }
    return 1;
}
