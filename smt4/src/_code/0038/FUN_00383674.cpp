#include "common.h"
#include "quest_center/QuestRecord.h"

extern "C" {

typedef struct Obj {
    /* 0x000 */ u8 unk000[0xD0C];
    /* 0xD0C */ u32 id;
} Obj;

u16 FUN_00383674(Obj *obj)
{
    return dataTable1bOr1cGetRecord((u16)obj->id)->id;
}

} /* extern "C" */
