#ifndef SHARD_W5_W5MATCH2_PAIREDIDS_H
#define SHARD_W5_W5MATCH2_PAIREDIDS_H
#include "common.h"
struct PairedIdList {
    u8 unk00[0x34];
    u16 ids[8]; // 0x34
};
#endif
