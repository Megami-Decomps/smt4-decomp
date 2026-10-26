#include "common.h"
#include "code/Code0029_Smt4a.h"

extern "C" {

typedef struct Record {
    /* 0x00 */ u8 unk00[10];
    /* 0x0A */ s16 value;
} Record;

Record *dataTable4CGetEntry(void);

/* Returns whether the halfword at 0xA of the record dataTable4CGetEntry returns is 0. */
u8 FUN_00297008(void)
{
    Record *record;

    record = dataTable4CGetEntry();
    return record->value == 0;
}

} /* extern "C" */
