#ifndef SHARD_W6_W6MATCH3_HALFWORD_BUFFER_H
#define SHARD_W6_W6MATCH3_HALFWORD_BUFFER_H

#include "common.h"

struct HalfwordBuffer {
    /* 0x00 */ u8 unk00[0x24];
    /* 0x24 */ u16* data;
    /* 0x28 */ u32 count;
};

struct HalfwordBufferHandle {
    /* 0x00 */ HalfwordBuffer* buffer;
};

#endif
