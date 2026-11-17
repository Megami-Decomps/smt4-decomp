#include "gamedata/DevilRecordA.h"
struct QueryRecord {u8 unk00[38];u16 index;};
extern "C" {
/* Reads a valid indexed signed table value, or zero when unavailable. */
s32 FUN_004c6bd0(u32 id,const QueryRecord *record){if(record==NULL||record->index>=18)return 0;u32 index=record->index;DevilRecordA *table=devilGetRecord((u16)id);return table!=NULL ? table->categoryModifiers[index] : 0;}
}
