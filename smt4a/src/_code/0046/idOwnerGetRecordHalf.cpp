#include "shard/Shard0046.h"

extern "C" {

typedef struct IdOwnerA0C {
    /* 0x000 */ u8 unk000[0xA0C];
    /* 0xA0C */ u32 unkA0C;
} IdOwnerA0C;

extern u16 *dataTable1bOr1cGetRecord(u32 id);

u16 idOwnerGetRecordHalf(IdOwnerA0C *obj)
{
    u16 *record = dataTable1bOr1cGetRecord(obj->unkA0C & 0xFFFF);

    return *record;
}

} /* extern "C" */
