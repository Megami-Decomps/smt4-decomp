#ifndef SHARD_W6_W6MATCH5_PAIREDIDFLAGS_H
#define SHARD_W6_W6MATCH5_PAIREDIDFLAGS_H

#include "shard/W5_W5Match2_PairedIds.h"

struct PairedIdFlagsView {
    PairedIdList paired; // 0x00; preserve the shared 0x44-byte prefix.
    u8 flags[8];         // 0x44
};

#endif
