#include "common.h"
#include "code/Code0028.h"
#include "gamedata/GamePlayerData.h"
#include "gamedata/SaveSlotTableIV.h"
#include "gamedata/UnitRecordAccess.h"

extern "C" {

int FUN_00288ddc(int limit, u32 id)
{
    PlayerDataIV *pad;
    SaveSlotTableIV *party;
    StatBlock *unit;
    int i;

    if ((int)id < 0) {
        pad = gameGetPlayerData();
        if (pad->maxHp < limit) {
            return 1;
        }
    } else {
        party = gameGetSlotTable();
        i = 0;
        do {
            const s32 slot = party->stock[i];
            if ((((slot >= 0) && (unit = gameGetUnitRecord(slot), unit != NULL)) &&
                 (unit->id == id)) && (unit->maxHp < limit)) {
                return 1;
            }
            i = i + 1;
        } while (i < 0x18);
    }
    return 0;
}

} /* extern "C" */
