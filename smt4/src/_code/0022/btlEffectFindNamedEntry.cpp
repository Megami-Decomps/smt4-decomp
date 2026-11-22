/* NON_MATCHING: registers and loops now follow retail (NULL result in r7, table base r9, entry offset 264 in r8, loops not unrolled); retail zeroes the index before the preferFirst test and returns the found entry from one shared block, where armcc here keeps the result == NULL test between the loops and a second copy of the entry address. */
#include "common.h"
#include <string.h>

struct BtlEffectNameEntry {
    /* 0x00 */ char name[0x16];
};

struct BtlEffectNameTable {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ BtlEffectNameEntry entries[4];
};

struct BtlEffectNameOwner {
    /* 0x0000 */ u8 unk0000[0x1cfc];
    /* 0x1cfc */ BtlEffectNameTable *names;
};

struct BtlEffectNames {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ const char *fallbackName;
    /* 0x08 */ const char *preferredName;
};

extern "C" {
extern BtlEffectNames g_btlEffect;

/* Finds the entry named like the preferred effect (first, when `preferFirst` is positive) or the fallback; NULL if none. */
char *btlEffectFindNamedEntry(BtlEffectNameOwner *owner, s32 preferFirst)
{
    char *result = NULL;

    if (owner->names != NULL) {
        if (preferFirst > 0) {
            for (s32 i = 0; i < 4; i++) {
                BtlEffectNameEntry *entry = &owner->names->entries[i];
                if (strcmp(entry->name, g_btlEffect.preferredName) == 0) {
                    result = owner->names->entries[i].name;
                    break;
                }
            }
        }
        if (result == NULL) {
            for (s32 i = 0; i < 4; i++) {
                BtlEffectNameEntry *entry = &owner->names->entries[i];
                if (entry != NULL && (strcmp(entry->name, g_btlEffect.fallbackName) == 0 ||
                                      strcmp(entry->name, g_btlEffect.preferredName) == 0)) {
                    result = owner->names->entries[i].name;
                    break;
                }
            }
        }
    }
    return result;
}

} /* extern "C" */
