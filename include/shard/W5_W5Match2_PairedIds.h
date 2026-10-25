#ifndef SHARD_W5_W5MATCH2_PAIREDIDS_H
#define SHARD_W5_W5MATCH2_PAIREDIDS_H
#include "common.h"
struct PairedIdList {
    u8 unk00[0x34];
    u16 ids[8]; // 0x34
};
#ifdef __cplusplus
extern "C" {
#endif

u32 FUN_003df4a4(u32 id);

#ifdef __cplusplus
}
#endif

#endif
