/* NON_MATCHING: svc 0x28 matches through svcGetSystemTick; retail converts ticks to nanoseconds with an inline multiply by 3.7297865 and divides by 1000 through the runtime's divide-by-constant helper, which armcc does not emit for a plain 64-bit division (it calls __aeabi_ldivmod). */
#include "shard/W6_W6Match7_MoviePacketPump.h"
#include "nn/svc.h"

/* Ticks of the 268.111856 MHz system counter to microseconds. */
static s64 ticksToMicroseconds(s64 ticks)
{
    return ticks * 1000000 / 268111856;
}

extern "C" {

/* The playback time of the movie in microseconds: the clock time elapsed since the first
 * packet's timestamp was matched to the clock. Starts the match on the first call. Returns -1
 * while the movie is not playing. */
s64 FUN_00350ff8(MoviePacketPump *pump)
{
    MovieSync *sync = &pump->sync;

    if (sync->state != 3) {
        return -1;
    }
    if (sync->nextTime == 0) {
        s32 stream;
        if (sync->entryIndex[0] >= 0) {
            stream = 0;
        } else if (sync->entryIndex[1] >= 0) {
            stream = 1;
        } else {
            return -1;
        }
        u64 first = pump->packet.firstPacketTime;
        s64 offset = 0;
        if (first != 0) {
            offset = sync->ring[stream][sync->readPos[stream] % MOVIE_SYNC_RING_SIZE] - first;
        }
        sync->nextTime = ticksToMicroseconds(svcGetSystemTick()) + offset;
        sync->baseTime = sync->nextTime - sync->ring[stream][sync->readPos[stream] % MOVIE_SYNC_RING_SIZE];
    }
    return ticksToMicroseconds(svcGetSystemTick()) - sync->nextTime;
}

} /* extern "C" */
