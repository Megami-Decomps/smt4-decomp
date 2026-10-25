/* Structs shared by the helper functions in code shard 0039. */
#ifndef SHARD_SHARD0039_H
#define SHARD_SHARD0039_H

#include "common.h"

#include "shard/Shard0038.h"

/* Request-state cache with trailing storage allocated for the supported request ids. */
struct TextureRequestCache {
    /* 0x00 */ u8 unk00[0x94];
    /* 0x94 */ u32 states[1];
};

#ifdef __cplusplus
extern "C" {
#endif

void convertToBufferAndStore(u32 src, u16 *dst);

#ifdef __cplusplus
}
#endif

#endif
