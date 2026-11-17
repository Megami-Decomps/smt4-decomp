#include "gamedata/NkmBaseRecordA.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {

u16 FUN_003f3908(const SlotRecordA *unit)
{
    NkmBaseRecordA *rec = nkmBaseGetRecord(unit->id);

    return rec->evolutionTarget;
}

} /* extern "C" */
