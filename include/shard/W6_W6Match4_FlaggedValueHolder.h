#ifndef SHARD_W6_W6MATCH4_FLAGGEDVALUEHOLDER_H
#define SHARD_W6_W6MATCH4_FLAGGEDVALUEHOLDER_H

#include "shard/Shard0031.h"

struct FlaggedValueHolder {
    u8 kind; // 0x00
    u8 unk01[0x0f];
    FlaggedEntry entry; // 0x10
};

#endif
