/* Pieces of the 64-bit program id that the system service takes: media selector in bits 28-29 of the low half. */
#ifndef SYS_PROGRAM_ID_H
#define SYS_PROGRAM_ID_H

#include "common.h"

#ifdef __cplusplus
extern "C" void sysFatalBreak(void);
#endif

/* Media selector bits (0 or 2); any other media byte is fatal. */
static __inline s32 programMediaBits(u8 media)
{
    if (media == 0) {
        return 0;
    }
    if (media == 1) {
        return 2;
    }
    sysFatalBreak();
    return 0;
}

#endif
