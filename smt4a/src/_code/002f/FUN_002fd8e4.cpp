#include "common.h"

extern "C" {

typedef struct Table {
    /* 0x00 */ u8 unk00[0x62];
    /* 0x62 */ u16 group;
} Table;

typedef struct Entry {
    /* 0x00 */ u32 unk00;
    /* 0x04 */ s32 index;      /* negative = none */
} Entry;

int FUN_001ab854(void);
int FUN_00321a98(Entry *a, Entry *b);

static __inline u16 entryGroup(Entry *entry)
{
    if (entry->index < 0) {
        return 0;
    }
    return ((Table *)FUN_001ab854())->group;
}

/* Runs FUN_00321a98 on two entries when they belong to the same group. */
void FUN_002fd8e4(Entry *a, Entry *b)
{
    u16 groupA = entryGroup(a);
    u16 groupB = entryGroup(b);

    int diff = groupA - groupB;

    if (diff != 0) {
        return;
    }
    FUN_00321a98(a, b);
}

} /* extern "C" */
