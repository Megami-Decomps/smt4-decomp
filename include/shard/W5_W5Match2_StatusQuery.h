#ifndef SHARD_W5_W5MATCH2_STATUSQUERY_H
#define SHARD_W5_W5MATCH2_STATUSQUERY_H
#include "common.h"
struct TextureStateEntry { void *texture; u8 unk04[20]; };
struct TextureStateTable { TextureStateEntry *entries; };
struct CecProcessView { u32 unk00; void *process; };
#endif
