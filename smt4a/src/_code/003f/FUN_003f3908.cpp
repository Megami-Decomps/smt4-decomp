#include "gamedata/DevilRecordA.h"
#include "shard/Shard003F.h"

extern "C" {

u16 FUN_003f3908(Lookup62 *unit)
{
    DevilRecordA *rec = devilGetRecord(unit->id);

    return rec->evolutionTarget;
}

} /* extern "C" */
