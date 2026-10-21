#ifndef SHARD_W5_W5MATCH2_LINKEDITEMS_H
#define SHARD_W5_W5MATCH2_LINKEDITEMS_H
#include "common.h"
struct LinkedItem { u8 unk00[0xAC]; LinkedItem *next; };
struct LinkedItems { u8 unk00[0x8C]; LinkedItem *head; };
#endif
