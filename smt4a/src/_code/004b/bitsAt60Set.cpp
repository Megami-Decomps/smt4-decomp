#include "util/BitsAndBytes_VariantE_Shard004B.h"
#include "gamedata/GameSaveDataA.h"

extern "C" {

void bitsAt60Set(SlotRecordA *obj, u8 bit)
{
    obj->ailments = obj->ailments | (u16)(1 << bit);
}

} /* extern "C" */
