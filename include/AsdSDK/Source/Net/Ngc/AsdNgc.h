/* AsdSDK/Source/Net/Ngc/AsdNgc.cpp: the bad-word check (nn::ngc) used on player-entered text.
 *
 * AsdNgc holds the nn::ngc work area and the state of the last check: the words handed in (at
 * most ASD_NGC_MAX_WORDS of them, copied to `input`) and one result word per input word, nonzero
 * where the library flagged it. */
#ifndef ASDSDK_SOURCE_NET_NGC_ASDNGC_H
#define ASDSDK_SOURCE_NET_NGC_ASDNGC_H

#include "common.h"

#define ASD_NGC_MAX_WORDS 16

/* AsdNgc.flags */
#define ASD_NGC_READY 0x1

/* AsdNgc.status */
#define ASD_NGC_CHECKED 0x10000 /* a check ran */
#define ASD_NGC_FLAGGED 0x20000 /* ...and flagged at least one word */
#define ASD_NGC_FAILED 0x40000  /* the library call failed */

typedef struct AsdNgc {
    /* 0x0000 */ u32 flags;
    /* 0x0004 */ u32 status;
    /* 0x0008 */ u8 work[0x1040];                  /* nn::ngc work area */
    /* 0x1048 */ const u32 *words;                 /* the caller's words */
    /* 0x104c */ u32 input[ASD_NGC_MAX_WORDS];     /* copy handed to the library */
    /* 0x108c */ u32 result[ASD_NGC_MAX_WORDS];    /* nonzero: the word was flagged */
    /* 0x10cc */ s32 wordCount;
    /* 0x10d0 */ s32 capacity;
    /* 0x10d4 */ u32 unk10d4;
    /* 0x10d8 */ u32 unk10d8;
} AsdNgc;

#endif
