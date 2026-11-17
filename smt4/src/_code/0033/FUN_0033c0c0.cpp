#include "common.h"
#include "gamedata/NkmBaseRecord.h"

extern "C" {

typedef struct Source {
    /* 0x00 */ u8 unk00[0x46];
    /* 0x46 */ u16 id;
} Source;

u16 FUN_0033c0c0(Source *source)
{
    NkmBaseRecord *record = nkmBaseGetRecord(source->id);

    return record->evolutionTarget;
}

} /* extern "C" */
