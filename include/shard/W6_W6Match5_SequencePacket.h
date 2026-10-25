#ifndef SHARD_W6_W6MATCH5_SEQUENCEPACKET_H
#define SHARD_W6_W6MATCH5_SEQUENCEPACKET_H

#include "common.h"

struct ScriptSequencePacket {
    u32 first;
    u32 second;
    u32 flags;

    ScriptSequencePacket(u32 firstArg, u32 secondArg, u32 flagBits)
    {
        first = firstArg;
        second = secondArg;
        flags = flagBits;
    }
};

#endif
