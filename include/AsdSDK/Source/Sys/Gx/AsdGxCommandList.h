/* AsdSDK/Source/Sys/Gx/AsdGxCommandList.cpp: GPU command lists.
 *
 * Two nngx command lists are double-buffered (`current` flips each frame). A process that renders
 * owns an AsdGxCommandList: beginning it pushes it on a small stack (nested lists), saving the
 * state that was active, and ending it restores the enclosing list's state. */
#ifndef ASDSDK_SOURCE_SYS_GX_ASDGXCOMMANDLIST_H
#define ASDSDK_SOURCE_SYS_GX_ASDGXCOMMANDLIST_H

#include "common.h"

#define ASD_GX_CMDLIST_DEPTH 32 /* entries a list can stack */

/* AsdGxCommandList.state */
#define ASD_GX_CMDLIST_ACTIVE 1
#define ASD_GX_CMDLIST_SUSPENDED 2

/* Four state words saved when a list is begun (what FUN_001376d8 reads back) and a heap copy of the
 * state they describe. */
typedef struct AsdGxStateEntry {
    /* 0x00 */ u32 values[4];
    /* 0x10 */ void *copy;      /* heap copy, or NULL */
    /* 0x14 */ u32 copySize;
} AsdGxStateEntry;

/* The double-buffering globals. */
typedef struct AsdGxState {
    /* 0x00 */ s32 current;     /* index of the list being recorded */
    /* 0x04 */ u32 newListId;   /* the nngx command list new AsdGxCommandLists start with */
    /* 0x08 */ s32 depth;       /* lists begun and not yet ended */
} AsdGxState;

/* One render pass's command list (0x310 bytes). */
typedef struct AsdGxCommandList {
    /* 0x000 */ u32 id;                                         /* the nngx command list */
    /* 0x004 */ AsdGxStateEntry entries[ASD_GX_CMDLIST_DEPTH]; /* saved while nested lists run */
    /* 0x304 */ s32 entryCount;
    /* 0x308 */ u32 boundList;                                  /* the nngx list bound when it began */
    /* 0x30c */ u32 state;
} AsdGxCommandList;

#ifdef __cplusplus
extern "C" {
#endif
/* Canonical declaration (matches the definition). */
void *asdGxCommandListAllocBlock(void);
#ifdef __cplusplus
}
#endif

extern "C" {
unsigned int jyoucyuGetTableEntry(int param_1);
}

extern "C" {
u32 FUN_002c5210(void);
}

extern "C" {
AsdGxCommandList *asdGxCommandListCreate(void);
}

extern "C" {
u32 FUN_00167c14(u32 *x, u32 *y, s32 mode);
}

#ifdef __cplusplus
extern "C" {
#endif

u32 asdTMTexTableGetHeaderValue(u32 table, u32 node);

#ifdef __cplusplus
}
#endif

#endif
