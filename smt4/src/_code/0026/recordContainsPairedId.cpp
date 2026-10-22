#include "shard/W5_W5Match2_PairedIds.h"
extern "C" {
/* Search the four identifier pairs, allowing a null owner. */
s32 recordContainsPairedId(const PairedIdList *list,u32 id) { if (list==NULL) return 0; for (s32 index=0;index<8;index+=2) if (list->ids[index]==id || list->ids[index+1]==id) return 1; return 0; }
}
