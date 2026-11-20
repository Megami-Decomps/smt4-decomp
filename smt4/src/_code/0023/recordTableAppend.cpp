#include "common.h"

extern "C" {

int stringCopyTruncated(u8 *dst, u32 src, int size);

extern int DAT_00471a50;
extern u8 DAT_004e655c[][0x40];

/* Copies a 0x40-byte record into the next slot of the table. */
void recordTableAppend(u32 src)
{
    stringCopyTruncated(DAT_004e655c[DAT_00471a50], src, 0x40);
    DAT_00471a50 = DAT_00471a50 + 1;
}

} /* extern "C" */
