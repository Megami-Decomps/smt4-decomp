#include "common.h"
struct QueryRecord {u8 unk00[38];u16 index;};
struct SignedTable {u8 unk00[160];s8 values[18];};
extern "C" {
SignedTable *FUN_00184310(u32 id);
/* Reads a valid indexed signed table value, or zero when unavailable. */
s32 FUN_004c6bd0(u32 id,const QueryRecord *record){if(record==NULL||record->index>=18)return 0;u32 index=record->index;SignedTable *table=FUN_00184310((u16)id);return table!=NULL ? table->values[index] : 0;}
}
