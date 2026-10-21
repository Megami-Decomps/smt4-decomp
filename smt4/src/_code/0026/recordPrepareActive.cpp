/* NON_MATCHING: compiler changes the active-record stores around the preparation call. */
#include "common.h"
extern "C" {
struct ActiveRecord { u8 active; u8 unk01[3]; u32 first; u8 pending; u8 unk09[3]; u32 third; u8 unk10[8]; u32 second; };
void FUN_00346b84(ActiveRecord *record);
/* Initialize record arguments, prepare it, then mark it active. */
void recordPrepareActive(ActiveRecord *record,u32 first,u32 second,u32 third) { record->first=first; record->second=second; record->third=third; record->pending=0; FUN_00346b84(record); record->active=1; }
}
