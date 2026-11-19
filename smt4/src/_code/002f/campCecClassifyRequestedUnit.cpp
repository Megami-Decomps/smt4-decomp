#include "battle/BtlEntry.h"
#include "camp/CampCec/CampCecEdit.h"
#include "gamedata/FlagBitTests.h"
#include "gamedata/UnitRecordAccess.h"
#include "gamedata/SaveSlotTableIV.h"
#include "event/2dEvent/EventEffect.h"

extern "C" {
void FUN_002579bc(s32 index);

// Queue the edit screen's next message for the requested demon: 5 when it is an unflagged active party member, 2 when it is a flagged stock demon, otherwise 4.
s32 campCecClassifyRequestedUnit(CampCecEdit *work)
{
    s32 result = 0;
    if (partyPanelGetRequestedUnitId()) {
        work->unit = static_cast<s16>(partyPanelGetRequestedUnitId());
        work->nextMessage = -1;
        SaveSlotTableIV *slots = gameGetSlotTable();
        for (s32 i = 0; i < 3; ++i) {
            if (slots->active[i] >= 0
                && gameGetUnitRecord(slots->active[i])->id == work->unit
                && !flagWordTestBit(gameGetUnitRecord(slots->active[i]), 10)
                && !flagWordTestBit(gameGetUnitRecord(slots->active[i]), 1)) {
                work->nextMessage = 5;
                break;
            }
        }
        if (work->nextMessage == -1) {
            for (s32 i = 0; i < 24; ++i) {
                if (slots->stock[i] >= 0
                    && gameGetUnitRecord(slots->stock[i])->id == work->unit
                    && (flagWordTestBit(gameGetUnitRecord(slots->stock[i]), 10)
                        || flagWordTestBit(gameGetUnitRecord(slots->stock[i]), 1))) {
                    work->nextMessage = 2;
                    break;
                }
            }
            if (work->nextMessage == -1) {
                FUN_002579bc(0);
                work->nextMessage = 4;
            }
        }
        result = 2;
        work->nextState = 2;
    }
    return result;
}
} // extern "C"
