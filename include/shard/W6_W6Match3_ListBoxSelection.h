#ifndef SHARD_W6_W6MATCH3_LISTBOXSELECTION_H
#define SHARD_W6_W6MATCH3_LISTBOXSELECTION_H

#include "AsdSDK/Source/Util/AsdListBox.h"

// Known prefix of list-box process work; the selected row is top + offset.
struct AsdListBoxSelectionWork {
    AsdList items;      // 0x00
    u8 unk0c[0x54];
    s32 top;           // 0x60
    s32 offset;        // 0x64
};

#endif
