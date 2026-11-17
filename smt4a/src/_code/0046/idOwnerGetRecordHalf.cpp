#include "shard/Shard0046.h"
#include "quest_center/QuestRecordA.h"

extern "C" {

typedef struct IdOwnerA0C {
    /* 0x000 */ u8 unk000[0xA0C];
    /* 0xA0C */ u32 unkA0C;
} IdOwnerA0C;

u16 idOwnerGetRecordHalf(IdOwnerA0C *obj)
{
    QuestRecordA *record = dataTable1bOr1cGetRecord(obj->unkA0C & 0xFFFF);

    return record->id;
}

} /* extern "C" */
