#include "common.h"

extern "C" {

typedef struct Entry {
    /* 0x00 */ u8 unk00[0x34];
    /* 0x34 */ u32 value;
} Entry;

Entry *FUN_00301454(u8 *table);
extern u8 DAT_0062d88c[];

/* Returns the field at 0x34 of the structure FUN_00301454 returns for the global at 0x62D88C. */
u32 FUN_001153a0(void)
{
    Entry *entry = FUN_00301454(DAT_0062d88c);
    return entry->value;
}

} /* extern "C" */
