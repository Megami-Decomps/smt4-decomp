/* The asd CEC (StreetPass) state used by the message-box helpers. */
#ifndef SHARD_S1ASDCEC_H
#define SHARD_S1ASDCEC_H

#include "common.h"

/* The message-box request being processed. */
typedef struct AsdCecRequest {
    /* 0x00 */ u32 titleId;
    /* 0x04 */ u32 messageId;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ s32 box;          /* open message box handle */
} AsdCecRequest;

typedef struct AsdCec {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AsdCecRequest *request;
} AsdCec;

#endif
