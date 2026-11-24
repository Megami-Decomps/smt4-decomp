#include "shard/W6_W6Match5_RecordCallParameters.h"
#include "code/Code0035.h"

extern "C" {

typedef struct Table0cMessageRecord {
    /* 0x00 */ u8 unk00[0x22];
    /* 0x22 */ s16 id;
} Table0cMessageRecord;

Table0cMessageRecord *dataTable12FindBySortKey(u16 id);
u32 requestKindToId(s32 id);


/* Draws the selected table-0C record's message (kind 2, type 11). */
void FUN_0035bd4c(u16 id, u32 x, u32 y, u32 style)
{
    Table0cMessageRecord *record = dataTable12FindBySortKey(id);

    if (record != NULL) {
        u32 value = requestKindToId(record->id);

        texTableRecordCallWithParams(2, 0xB, value, x, y, style);
    }
}

} /* extern "C" */
