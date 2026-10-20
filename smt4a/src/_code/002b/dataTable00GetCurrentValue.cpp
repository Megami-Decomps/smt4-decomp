#include "common.h"

extern "C" {

typedef struct TableRecord {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u16 info;           /* low 15 bits are the value, bit 15 a flag */
} TableRecord;

extern u32 FUN_004bc850(void);
extern TableRecord *dataTable00FindById(u32 id);

/* Returns the 15-bit value of the table-00 record for the current id. */
u16 dataTable00GetCurrentValue(void)
{
    return dataTable00FindById(FUN_004bc850())->info & 0x7FFF;
}

} /* extern "C" */
