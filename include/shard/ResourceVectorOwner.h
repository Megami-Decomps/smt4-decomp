#ifndef SHARD_RESOURCEVECTOROWNER_H
#define SHARD_RESOURCEVECTOROWNER_H

#include "common.h"
#include <vector>

struct ResourceVectorOwner {
    /* 0x00 */ u8 unk00[0x14];
    /* 0x14 */ u32 flags;
    /* 0x18 */ std::vector<void *> resources;
};

#endif
