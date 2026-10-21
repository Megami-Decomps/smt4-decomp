#ifndef SHARD_W5_W5MATCH2_OWNEDBUFFERS_H
#define SHARD_W5_W5MATCH2_OWNEDBUFFERS_H
#include "common.h"
struct OwnedBuffers { u8 active; u8 unk01[0x2B]; void *first; u8 unk30[0x18]; void *second; };
#endif
