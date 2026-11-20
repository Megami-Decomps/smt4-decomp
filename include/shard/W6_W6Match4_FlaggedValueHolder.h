#ifndef SHARD_W6_W6MATCH4_FLAGGEDVALUEHOLDER_H
#define SHARD_W6_W6MATCH4_FLAGGEDVALUEHOLDER_H

#include "shard/Shard0031.h"

struct FlaggedValueHolder {
    u8 kind; // 0x00
    u8 unk01[3];
    s32 visibleRows; // 0x04: rows a list shows at most (debugItemListDraw draws min(visibleRows, count))
    s32 count; // 0x08: entries in the list (the marked ones for a pick list)
    u8 unk0c[4];
    FlaggedEntry entry; // 0x10
};

#endif
