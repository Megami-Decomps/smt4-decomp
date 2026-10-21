#include "shard/W5_W5Match2_MapDepartureRecord.h"
extern "C" {
u32 FUN_00285574(void);
void mapDepartSetTarget(s32 first,s32 second,s32 third);
void FUN_0027d5ac(s32 value);
u32 FUN_0028527c(s32 value);
extern MapDepartureRecord DAT_00447f40[];
/* Select the current map departure coordinates and clear the pending transition. */
u32 mapApplyDeparturePoint(void) { const MapDepartureRecord *record=&DAT_00447f40[FUN_00285574()]; mapDepartSetTarget(record->first,record->second,record->third); FUN_0027d5ac(0); return FUN_0028527c(0); }
}
