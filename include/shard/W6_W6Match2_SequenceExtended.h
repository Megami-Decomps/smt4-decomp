#ifndef SHARD_W6_W6MATCH2_SEQUENCE_EXTENDED_H
#define SHARD_W6_W6MATCH2_SEQUENCE_EXTENDED_H

#include "shard/W5_W5Match2_SequencePending.h"

struct ExtendedSequencePending {
    SequencePending request; // 0x00
    u32 parameters[6];       // 0x0c
};

#endif
