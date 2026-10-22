/* NON_MATCHING: retail keeps the NULL result in r7 and the string-table base in r9 (one more saved register) and zeroes the index before the preferFirst test. */
#include "common.h"

struct BtlEffectNameEntry {
    /* 0x00 */ char name[0x16];
};

struct BtlEffectNameTable {
    /* 0x000 */ u8 unk000[0x108];
    /* 0x108 */ BtlEffectNameEntry entries[4];
};

struct BtlEffectNameOwner {
    /* 0x0000 */ u8 unk0000[0x1f54];
    /* 0x1f54 */ BtlEffectNameTable *names;
};

struct BtlEffectNames {
    /* 0x00 */ u8 unk00[4];
    /* 0x04 */ const char *fallbackName;
    /* 0x08 */ const char *preferredName;
};

extern "C" {
extern BtlEffectNames g_btlEffect;
s32 libc_strcmp(const char *left, const char *right);

/* Finds the entry named like the preferred effect (first, when `preferFirst` is positive) or the fallback; NULL if none. */
char *FUN_004f7aa4(BtlEffectNameOwner *owner, s32 preferFirst)
{
    s32 i;

    if (owner->names != NULL) {
        if (preferFirst > 0) {
            for (i = 0; i < 4; i++) {
                if (libc_strcmp(owner->names->entries[i].name, g_btlEffect.preferredName) == 0) {
                    return owner->names->entries[i].name;
                }
            }
        }
        for (i = 0; i < 4; i++) {
            char *name = owner->names->entries[i].name;
            if (name != NULL && (libc_strcmp(name, g_btlEffect.fallbackName) == 0 ||
                                 libc_strcmp(name, g_btlEffect.preferredName) == 0)) {
                return owner->names->entries[i].name;
            }
        }
    }
    return NULL;
}

} /* extern "C" */
