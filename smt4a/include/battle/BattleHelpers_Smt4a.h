#pragma once
#include "common.h"

/* BattleHelpers (declarations migrated from callers). */
struct BtlMainStateA;
struct PtrAt8;
struct BtlStageWork;
extern "C" {

s32 btlGetPropertyMaximum(u32 property);

void btlQueueDuplicateSuppressedAction(s32 id, s32 target, u32 value);

void btlActionMarkRandomStatusTarget(BtlMainStateA **context, u32 status);

void* btlTalkGetTableSection0(PtrAt8 *obj);

void btlStageResetAndClearCameraFlag(BtlStageWork *work);

void btlUIClearWorkTables(void);

} /* extern "C" */
