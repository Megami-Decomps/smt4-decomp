#ifndef SHARD_SELECTIONPANELOWNER_H
#define SHARD_SELECTIONPANELOWNER_H

#include "shard/W5_W5Match2_TimedState.h"
#include "classes/SelectionState.h"
#include "classes/Obj4221a4.h"
#include <stddef.h>

struct SelectionPanelOwner {
    /* 0x0000 */ u32 state;
    /* 0x0004 */ u8 unk0004[0x20c];
    /* 0x0210 */ TimedState firstTimer;
    /* 0x0224 */ TimedState secondTimer;
    /* 0x0238 */ u8 unk0238[8];
    /* 0x0240 */ SelectionFlags selection;
    /* 0x024f */ u8 unk024f[0x65];
    /* 0x02b4 */ const void *dispatchTable;
    /* 0x02b8 */ u8 unk02b8[0x30];
    /* 0x02e8 */ Obj4221a4 panel;
    /* 0x0350 */ u32 unk0350;
    /* 0x0354 */ u32 unk0354;
    /* 0x0358 */ u32 unk0358;
    /* 0x035c */ u8 unk035c[0xdcc];
    /* 0x1128 */ u32 unk1128;
    /* 0x112c */ u32 unk112c;
    /* 0x1130 */ u8 unk1130[0x80];
    /* 0x11b0 */ u32 unk11b0;
    /* 0x11b4 */ u8 unk11b4[0x5e0];
    /* 0x1794 */ u32 unk1794;
    /* 0x1798 */ u32 unk1798;
    /* 0x179c */ u8 unk179c[4];
    /* 0x17a0 */ u32 unk17a0;
    /* 0x17a4 */ u8 unk17a4[0x748];
    /* 0x1eec */ u32 unk1eec;
};

typedef char SelectionPanelOwnerPanelOffsetCheck[offsetof(SelectionPanelOwner, panel) == 0x2e8 ? 1 : -1];
typedef char SelectionPanelOwnerSizeCheck[sizeof(SelectionPanelOwner) == 0x1ef0 ? 1 : -1];

#endif
