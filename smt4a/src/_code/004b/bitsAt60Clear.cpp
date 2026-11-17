#include "util/BitsAndBytes_Shard004B.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {

void bitsAt60Clear(SlotRecordA *obj, u16 mask)
{
    obj->ailments = obj->ailments & ~mask;
}

} /* extern "C" */
