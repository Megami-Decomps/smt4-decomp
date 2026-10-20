/* AsdSDK/Source/Util/AsdList.cpp: the engine's list container. */
#ifndef ASDSDK_SOURCE_UTIL_ASDLIST_H
#define ASDSDK_SOURCE_UTIL_ASDLIST_H

#include "common.h"

#define ASD_LIST_APPEND (-1) /* insert index meaning "at the end" */

/* One entry: `item` and `func` are what the owner stored (for a list box: the item and its sort/draw callback). */
typedef struct AsdListNode {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ u32 unk04;
    /* 0x08 */ void *item;
    /* 0x0c */ u32 unk0c;
    /* 0x10 */ void *func;
    /* 0x14 */ u32 unk14;
    /* 0x18 */ u32 unk18;
} AsdListNode;

#endif
