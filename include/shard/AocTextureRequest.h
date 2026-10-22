/* A downloadable-content texture request. */
#ifndef SHARD_AOCTEXTUREREQUEST_H
#define SHARD_AOCTEXTUREREQUEST_H

#include "common.h"

struct AocTextureRequest {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 contentId;
    /* 0x08 */ u32 table;
    /* 0x0C */ u32 file;
};

#endif
