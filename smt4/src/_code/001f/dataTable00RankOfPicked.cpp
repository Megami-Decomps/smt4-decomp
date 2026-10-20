#include "common.h"

extern "C" {

typedef struct Record001fa498 {
    /* 0x00 */ u8 unk00[2];
    /* 0x02 */ u8 rank;
} Record001fa498;

u32 FUN_0025c05c(s32 index);
Record001fa498 *dataTable00FindById(u32 id);

/* Byte at +2 of the data-table-00 record for the id FUN_0025c05c picks for `index`. */
u8 dataTable00RankOfPicked(s32 index)
{
    return dataTable00FindById(FUN_0025c05c(index))->rank;
}

} /* extern "C" */
