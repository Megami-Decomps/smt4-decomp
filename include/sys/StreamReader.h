/* Binary stream reader shared by the record deserializers: a sticky error flag, a read position
 * and a mode flag. Each record read checks `error` after every field and bails out early. */
#ifndef SYS_STREAMREADER_H
#define SYS_STREAMREADER_H

#include "common.h"

typedef struct StreamReader {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 error;        /* set once a read overruns */
    /* 0x05 */ u8 unk05[7];
    /* 0x0C */ u32 position;    /* current read offset */
    /* 0x10 */ u8 unk10[0x2b];
    /* 0x3B */ s8 skipHeader;   /* nonzero: records carry no length header */
} StreamReader;

#endif
