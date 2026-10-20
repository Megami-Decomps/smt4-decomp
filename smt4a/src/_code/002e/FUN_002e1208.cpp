/* Reads the two display values of table entry `id % 1000`, preferring the override record when it is active. */
#include "common.h"

extern "C" {

typedef struct Override {
    /* 0x00 */ s16 a;
    /* 0x02 */ s16 b;
    /* 0x04 */ s16 active;
    /* 0x06 */ u8 unk06[6];
    /* 0x0C */ u16 flags;
} Override;

typedef struct TableEntry {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ u16 a;
    /* 0x06 */ u16 b;
    /* 0x08 */ u8 unk08[4];
    /* 0x0C */ Override *override;
    /* 0x10 */ u8 unk10[4];
} TableEntry; /* 0x14 */

typedef struct Table {
    /* 0x00 */ TableEntry *entries;
} Table;

typedef struct Owner {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ Table *table;
} Owner;

extern Owner *asdTMTexTableCallFileC(void);

void FUN_002e1208(u32 unused, s32 id, u32 *outA, u32 *outB)
{
    Owner *owner = asdTMTexTableCallFileC();
    TableEntry *entry = &owner->table->entries[id % 1000];
    Override *override = entry->override;
    u32 a = entry->a & 0xFFFF7FFF;
    u32 b = entry->b & 0xFFFF7FFF;

    if (override != NULL && (override->active == 1 || (override->flags & 1) != 0)) {
        a = override->a;
        b = override->b;
    }
    if (outA != NULL) {
        *outA = a;
    }
    if (outB != NULL) {
        *outB = b;
    }
}

}
