/* NON_MATCHING: compiler changes the packed-bit byte base and mask register schedule. */
#include "shard/W5_W5Match2_QuestFlags.h"
extern "C" {
QuestFlagBlock *gameGetQuestCenterBlock(void);
/* Test a packed quest-status bit. */
s32 questTestPackedFlag(u32 index) { QuestFlagBlock *block=gameGetQuestCenterBlock(); u8 mask=(u8)(1u<<(index&7)); return (block->bits[index>>3]&mask)!=0; }
}
