#include "common.h"

extern "C" {

typedef struct BtlEntry {
    /* 0x00 */ u8 unk00[0x72];
    /* 0x72 */ u16 values[1];
} BtlEntry;

extern void *btlGetMainState(void);
extern BtlEntry *btlMainFindEntryByListedId(void *battle, u32 id);

/* Stores `value` at index `index` of the value table of the battle entry with the listed id `id`, if it exists. */
void FUN_00255180(u32 id, s32 index, s32 value)
{
    BtlEntry *entry = btlMainFindEntryByListedId(btlGetMainState(), id);

    if (entry != NULL) {
        entry->values[index] = value;
    }
}

} /* extern "C" */
