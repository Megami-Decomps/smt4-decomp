#include "shard/Shard0042.h"

extern "C" {

typedef struct Rec40 {
    /* 0x00 */ u8 data[0x40];
} Rec40;

extern s32 DAT_005c0a8c;
extern Rec40 DAT_00642980[];
extern void FUN_0019a46c(Rec40 *dst, u32 src, s32 size);

/* Appends a 0x40-byte record to the table. */
void recordTableAppend(u32 record)
{
    FUN_0019a46c(&DAT_00642980[DAT_005c0a8c], record, 0x40);
    DAT_005c0a8c = DAT_005c0a8c + 1;
}

} /* extern "C" */
