/* NON_MATCHING: the entry address is computed as table + (0x58 + i*0x16) in retail (offset first, table loaded after); this build loads the table first */
#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

typedef struct NameEntry {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ s16 id;
    /* 0x12 */ u8 unk12[4];
} NameEntry; /* 0x16 */

typedef struct NameTable {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ NameEntry entries[4];
} NameTable;

typedef struct Owner {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ NameTable *table;
} Owner;

typedef struct BtlEffect {
    /* 0x00 */ u8 unk00[0x0C];
    /* 0x0C */ const char *name;
} BtlEffect;

extern BtlEffect g_btlEffect;

extern s32 FUN_00293230(void);
extern s32 libc_strncmp(const char *a, const char *b, u32 count);
extern u32 libc_strlen(const char *text);

/* Returns the id of the owner's name entry that starts with the current battle effect's name; -1 when there is none. */
s32 FUN_00227dbc(Owner *owner)
{
    s32 i;

    if (owner->table != NULL) {
        btlGetMainState();
        if (FUN_00293230() == 0) {
            for (i = 0; i < 4; i++) {
                NameEntry *entry = &owner->table->entries[i];

                if (entry != NULL && libc_strncmp(entry->name, g_btlEffect.name, libc_strlen(g_btlEffect.name)) == 0) {
                    return entry->id;
                }
            }
        }
    }
    return -1;
}

} /* extern "C" */
