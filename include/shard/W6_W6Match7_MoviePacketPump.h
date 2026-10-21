#ifndef SHARD_W6_W6MATCH7_MOVIEPACKETPUMP_H
#define SHARD_W6_W6MATCH7_MOVIEPACKETPUMP_H

#include "shard/S2MovieSync.h"

class MoviePacketFilter {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual void unk08() = 0;
    virtual void unk0C() = 0;
    virtual void prepare(void* data, u32 size) = 0;
    virtual void process(void** data, u32* size) = 0;
};

class MoviePacketConsumer {
public:
    virtual void unk00() = 0;
    virtual void unk04() = 0;
    virtual s32 consume(void* data, u32 size) = 0;
};

struct MoviePacketStream {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 kind;
    /* 0x08 */ u8 unk08[8];
};

// Prefix through the packet-prepared flag, not the complete player object.
// Overlaying the views preserves streamCount at 0x484, inside MovieSync's tail padding.
struct MoviePacketPump {
    union {
        MovieSync sync;
        struct {
            /* 0x000 */ u8 unk000[0x130];
            /* 0x130 */ u64 firstPacketTime;
            /* 0x138 */ u8 unk138[0x1C0 - 0x138];
            /* 0x1C0 */ MoviePacketConsumer* consumer;
            /* 0x1C4 */ u8 unk1C4[0x484 - 0x1C4];
            /* 0x484 */ s32 streamCount;
            /* 0x488 */ MoviePacketFilter* filters[MOVIE_SYNC_ENTRIES];
            /* 0x4A8 */ MoviePacketStream streams[MOVIE_SYNC_ENTRIES];
            /* 0x528 */ u32 handles[MOVIE_SYNC_ENTRIES];
            /* 0x548 */ s32 current;
            /* 0x54C */ u8 prepared;
            /* 0x54D */ u8 unk54D[3];
        } packet;
    };
};

#endif
