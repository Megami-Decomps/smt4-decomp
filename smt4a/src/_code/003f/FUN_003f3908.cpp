#include "gamedata/NkmBaseRecordA.h"
#include "shard/Shard003F.h"

extern "C" {

u16 FUN_003f3908(Lookup62 *unit)
{
    NkmBaseRecordA *rec = nkmBaseGetRecord(unit->id);

    return rec->evolutionTarget;
}

} /* extern "C" */
