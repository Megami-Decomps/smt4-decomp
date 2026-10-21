/* NON_MATCHING: compiler changes the byte-pointer update and delays the enabled test during packed-bit update. */
#include "shard/W5_W5Match2_QuestFlags.h"
extern "C" {
QuestFlagBlock *gameDataBlocksGetStats(void);
/* Set or clear a packed quest-status bit. */
void questSetPackedFlag(u32 index,s32 enabled) { QuestFlagBlock *block=gameDataBlocksGetStats(); u8 *value=&block->bits[index>>3]; u8 mask=(u8)(1u<<(index&7)); if (enabled) *value|=mask; else *value&=~mask; }
}
