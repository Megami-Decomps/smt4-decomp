#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x68];
} Entry;

extern Entry DAT_0063afc8[];

int FUN_0019b738(Entry *entry, s32 size);
int FUN_00281060(Entry *entry, u32 a, u32 b, u32 c);

/* Clears entry `index` of the 0x68-byte entry table, then forwards the other arguments for it. */
void FUN_00359974(s32 index, u32 a, u32 b, u32 c)
{
    Entry *entry = &DAT_0063afc8[index];

    FUN_0019b738(entry, sizeof(Entry));
    FUN_00281060(entry, a, b, c);
}

} /* extern "C" */
