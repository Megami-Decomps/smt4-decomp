#ifndef ASDSDK_SOURCE_SYS_GX_ASDGXFRAMESTATE_H
#define ASDSDK_SOURCE_SYS_GX_ASDGXFRAMESTATE_H

#include "common.h"
#include <stddef.h>

/* The render preset block also carries the active command-list index and display mode. */
struct AsdGxFrameState {
    u8 unk000[0x13C];
    u8 commandLists[0x14]; /* 0x13C */
    s32 currentList; /* 0x150 */
    u8 unk154[0xA0];
    s32 displayMode; /* 0x1F4 */
};
typedef char AsdGxFrameStateLayoutCheck[offsetof(AsdGxFrameState, currentList) == 0x150 &&
    offsetof(AsdGxFrameState, displayMode) == 0x1F4 && sizeof(AsdGxFrameState) == 0x1F8 ? 1 : -1];

#endif
