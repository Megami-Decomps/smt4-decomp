/* A save-data style stream reader used by the record readers FUN_0011786c, FUN_0030514c, ...
 * Every read helper takes the reader and an output; a failed read sets `error`. */
#ifndef SHARD_READER_H
#define SHARD_READER_H

#include "common.h"

typedef struct Reader {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 error;      /* set once any read fails */
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 pos;       /* current read position */
    /* 0x10 */ u8 unk10[0x2B];
    /* 0x3B */ s8 headerless; /* nonzero: records have no leading flag/size header */
} Reader;

#endif
