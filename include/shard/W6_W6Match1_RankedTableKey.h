#ifndef SHARD_W6_W6MATCH1_RANKEDTABLEKEY_H
#define SHARD_W6_W6MATCH1_RANKEDTABLEKEY_H

#include "shard/W6_W6Match2_RankedTableRecord.h"

struct RankedTableKeyView {
    RankedTableRecord record;
    u8 unk9C[0x0a];
    u16 secondaryKey;
};

static __inline u16 rankedTableRecordGetSecondaryKey(const RankedTableRecord* record)
{
    return reinterpret_cast<const RankedTableKeyView*>(record)->secondaryKey;
}

#endif
