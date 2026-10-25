/* NON_MATCHING: slot-list base and loaded halfword use ip/r3 instead of retail r3/ip. */
#include "common.h"
extern "C" {
struct OrderedSlotList { u8 unk00[0x2F06]; s16 slots[12]; };
/* Find a slot's rank among nonnegative entries. */
s16 slotFindNonnegativeRank(const OrderedSlotList *list,s32 id) { s16 rank=-1; for (s32 index=0;index<12;++index) { s32 entry=list->slots[index]; if (entry>=0) ++rank; if (entry==id) return rank; } return -1; }
}
