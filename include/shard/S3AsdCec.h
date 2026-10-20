/* The CEC state (g_asdCec) the message box helpers use: it points at the message box parameters
 * and handle. */
#ifndef SHARD_S3ASDCEC_H
#define SHARD_S3ASDCEC_H

#include "common.h"

typedef struct AsdCecBox {
    /* 0x00 */ u32 param0;       /* passed to open */
    /* 0x04 */ u32 param1;
    /* 0x08 */ u8 unk08[0x10];
    /* 0x18 */ u32 handle;       /* message box handle */
} AsdCecBox;

typedef struct AsdCec {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ AsdCecBox *box;
} AsdCec;

#endif
