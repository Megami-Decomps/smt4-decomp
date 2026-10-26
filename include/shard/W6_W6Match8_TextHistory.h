#ifndef SHARD_W6_W6MATCH8_TEXT_HISTORY_H
#define SHARD_W6_W6MATCH8_TEXT_HISTORY_H

#include "shard/W5_W5Match1_RecordKeys.h"

struct TextHistoryChannel {
    u8 unk00[0xc];
    u16 text[126];
    u8 unk108[0x30];
};
struct TextHistoryCapture {
    u32 unk00;
    u16 text[24];
    u16 count; /* 0x34 */
};

static __inline void textHistoryWriteUnit(RenderChannelTable *table, u32 codepoint)
{
    TextHistoryChannel *channel = reinterpret_cast<TextHistoryChannel *>(
        &table->entries[static_cast<s16>(table->selected)]);
    channel->text[static_cast<s16>(table->unk4E02)] = codepoint;
}

#ifdef __cplusplus
extern "C" {
#endif

u8 FUN_0019be8c(s32 value);

#ifdef __cplusplus
}
#endif

#endif
