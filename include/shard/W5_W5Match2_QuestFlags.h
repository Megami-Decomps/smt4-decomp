#ifndef SHARD_W5_W5MATCH2_QUESTFLAGS_H
#define SHARD_W5_W5MATCH2_QUESTFLAGS_H
#include "common.h"
#include <stddef.h>

/* The quest center block's leading flag sets (smt4 gameGetQuestCenterBlock, smt4a gameDataBlocksGetStats):
 * sets of 32 flags, eight to a byte, tested by index. */
struct QuestFlagBlock {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u8 flags[4];   /* tested by questCenterTestFlag (smt4a questCenterTestFlag) */
    /* 0x08 */ u8 bits[1];    /* questTestPackedFlag, questSetPackedFlag */
};
typedef char QuestFlagBlockLayoutCheck[offsetof(QuestFlagBlock, flags) == 0x04 &&
    offsetof(QuestFlagBlock, bits) == 0x08 ? 1 : -1];
#endif
