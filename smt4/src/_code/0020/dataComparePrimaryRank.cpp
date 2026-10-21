#include "shard/W5_W5Match2_RankedData.h"
extern "C" {
const RankedDataRecord *dataTable08Sub2GetRecord(u32 id);
/* Compare descending rank, then ascending table index for equal ranks. */
s32 dataComparePrimaryRank(const u16 *left,const u16 *right) { const RankedDataRecord *first=dataTable08Sub2GetRecord(*left); const RankedDataRecord *second=dataTable08Sub2GetRecord(*right); s32 difference=second->firstRank-first->firstRank; if (difference==0) difference=first->index-second->index; return difference; }
}
