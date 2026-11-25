#ifndef SHARD_W6_W6MATCH8_TEXT_HISTORY_H
#define SHARD_W6_W6MATCH8_TEXT_HISTORY_H

#include "shard/W5_W5Match1_RecordKeys.h"

static __inline void textHistoryWriteUnit(RenderChannelTable *table, u32 codepoint)
{
    table->entries[table->selected].text[(s16)table->unk4E02] = codepoint;
}

#ifdef __cplusplus
extern "C" {
#endif

u8 charCodeIsPrivateUseGlyph(s32 value);

#ifdef __cplusplus
}
#endif

#endif
