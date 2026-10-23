#ifndef UI_DEBUG_ITEM_LIST_H
#define UI_DEBUG_ITEM_LIST_H
#include "shard/W6_W6Match4_FlaggedValueHolder.h"
#include <stddef.h>

struct DebugItemRow {
    u16 id;
    u16 unk02;
};
typedef char DebugItemRowLayoutCheck[sizeof(DebugItemRow) == 4 ? 1 : -1];
struct DebugItemList {
    /* 0x000 */ u32 flags;
    /* 0x004 */ u8 unk004[0x654];
    /* 0x658 */ FlaggedValueHolder selection;
    /* 0x6CC */ DebugItemRow items[1];
};
typedef char DebugItemListOffsetCheck[
    offsetof(DebugItemList, selection) == 0x658 &&
    offsetof(DebugItemList, items) == 0x6CC ? 1 : -1];
#endif
