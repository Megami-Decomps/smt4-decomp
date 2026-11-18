#ifndef GAMEDATA_NKM_NKMGROWEVENT_H
#define GAMEDATA_NKM_NKMGROWEVENT_H

#include "common.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {
s32 recordRestoreScaledMaximumPair(SlotRecordA *record);
void partyRecordSetEquippedItemClampRank(SlotRecordA *record, u32 item, s32 slot);
}

#endif
