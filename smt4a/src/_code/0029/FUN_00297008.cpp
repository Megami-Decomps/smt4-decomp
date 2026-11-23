#include "common.h"
#include "code/Code0029_Smt4a.h"
#include "gamedata/DataTableAccess_VariantF.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[10];
    /* 0x0A */ s16 value;
} Record;


/* Returns whether the halfword at 0xA of data table 0x4C's record `index` is 0 (smt4a mapRndMazeUpdateModelVisibility passes the index). */
u8 FUN_00297008(u32 index)
{
    Record *record;

    record = (Record *)dataTable4CGetEntry(index);
    return record->value == 0;
}

} /* extern "C" */
