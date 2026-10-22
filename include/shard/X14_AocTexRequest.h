/* A texture-table request for add-on content (Apocalypse): the content id and the texture table
 * node it needs. */
#ifndef SHARD_X14_AOCTEXREQUEST_H
#define SHARD_X14_AOCTEXREQUEST_H

#include "common.h"
#include <stddef.h>

typedef struct AocTexRequest {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u32 contentId;
    /* 0x08 */ u32 table;       /* texture table; 6 is the add-on demon table */
    /* 0x0C */ u32 node;
} AocTexRequest;

typedef char AocTexRequestOffsets[offsetof(AocTexRequest, contentId) == 0x4 &&
    offsetof(AocTexRequest, node) == 0xC ? 1 : -1];

#endif
