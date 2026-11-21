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

/* A named sequence request (kind 4): the scene id, the save slot (-1: none) and the scene name. */
struct NamedSceneSequence {
    /* 0x00 */ u32 id;
    /* 0x04 */ s32 slot;
    /* 0x08 */ char name[24];
};

#endif
