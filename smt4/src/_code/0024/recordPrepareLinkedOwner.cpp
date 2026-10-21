/* NON_MATCHING: compiler preserves the owner in r4 instead of the retail interprocedurally preserved r3. */
#include "shard/W5_W5Match2_LocatedRecord.h"
extern "C" {
s32 FUN_002a6f48(u32 id);
LocatedRecord *FUN_002a6d50(void *owner,s32 index);
/* Find a record by ID and read its signed value, returning zero when absent. */
s32 recordPrepareLinkedOwner(void *owner,u32 id) { s32 index=FUN_002a6f48(id); if (index==-1) return 0; LocatedRecord *record=FUN_002a6d50(owner,index); return record!=NULL ? record->value : 0; }
}
