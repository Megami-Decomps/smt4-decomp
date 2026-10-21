#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 info;           /* low 15 bits are the value, bit 15 a flag */
} TableRecord;

extern u32 FUN_004bc850(s32 index);
extern TableRecord *dataTable00FindById(u32 id);

/* Returns the 15-bit value of the table-00 record selected for this table-02 index. */
u16 dataTable00GetCurrentValue(s32 index)
{
    return dataTable00FindById(FUN_004bc850(index))->info & 0x7FFF;
}

} /* extern "C" */
