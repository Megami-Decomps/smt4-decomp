#include "shard/W5_W5Match2_CountPairs.h"
extern "C" {
/* Return true only when every count pair is nonpositive. */
s32 recordAreAllCountsNonpositive(const CountPairTable *table) { for (s32 index=0;index<50;index+=2) if (table->counts[index]>0 || table->counts[index+1]>0) return 0; return 1; }
}
