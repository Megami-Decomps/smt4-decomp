/* NON_MATCHING: retail reserves a 44-byte packet-output frame, tests timestamp words separately and retains player+0x500 for the prepared flag; the direct SDK-output locals use 32 bytes and different base scheduling. */
#include "shard/W6_W6Match7_MoviePacketPump.h"

extern "C" {
u32 FUN_00514018(void* backend, u32 stream, u32* count);
u32 FUN_00514088(void* backend, u32 stream, void** data, u32* size,
                 u32* flags, u64* timestamp);
u32 resourceQueryLoadStatus(void* backend, u32 stream);

/* Feed queued packets, retaining filter state when the consumer cannot accept one. */
void moviePumpCurrentStreamPackets(MoviePacketPump* pump)
{
    if (pump->packet.streamCount <= 0) {
        return;
    }
    u32 remaining;
    if (pump->packet.current < 0) {
        remaining = 0;
    } else {
        FUN_00514018(reinterpret_cast<void*>(*pump->sync.backend),
                     pump->packet.handles[pump->packet.current], &remaining);
    }
    while (remaining) {
        void* data;
        u32 size;
        u32 flags;
        u64 timestamp;
        FUN_00514088(reinterpret_cast<void*>(*pump->sync.backend),
                     pump->packet.handles[pump->packet.current],
                     &data, &size, &flags, &timestamp);
        if (!pump->packet.firstPacketTime) {
            pump->packet.firstPacketTime = timestamp;
        }
        if (pump->packet.streams[pump->packet.current].kind != 2 &&
            pump->packet.filters[pump->packet.current]) {
            if (!pump->packet.prepared) {
                pump->packet.filters[pump->packet.current]->prepare(data, size);
                pump->packet.prepared = 1;
            }
            pump->packet.filters[pump->packet.current]->process(&data, &size);
        }
        if (!pump->packet.consumer->consume(data, size)) {
            return;
        }
        pump->packet.prepared = 0;
        resourceQueryLoadStatus(reinterpret_cast<void*>(*pump->sync.backend),
                     pump->packet.handles[pump->packet.current]);
        --remaining;
    }
}
} // extern "C"
