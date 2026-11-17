#include "util/BitsAndBytes_VariantF_Shard004B.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {

u8 bitsAt60Test(SlotRecordA *obj, u8 bit)
{
    return (obj->ailments & (1 << bit)) != 0;
}

} /* extern "C" */
