#include "common.h"
#include "battle/BtlMainAccess.h"

extern "C" {

/* A 0x16-byte effect entry: a name string with a value at 0x10. */
struct EffectEntry {
    /* 0x00 */ char name[0x10];
    /* 0x10 */ s16 value;
    /* 0x12 */ u8 unk12[4];
};

struct EffectTable {
    /* 0x0000 */ u8 unk0000[0x1CFC];
    /* 0x1CFC */ u8 *base;
};

extern const char DAT_0040090c[]; /* "NOT_EFT" */
s32 FUN_00293230(void);
s32 libc_strcmp(const char *a, const char *b);

/* Returns the value of the first of four entries named "NOT_EFT"; -1 while busy, 30 if none. */
s32 FUN_002281a4(EffectTable *table)
{
    s32 result;
    s32 i;

    btlGetMainState();
    s32 busy = FUN_00293230();
    if (busy != 0) {
        return -1;
    }
    result = 30;
    for (i = 0; i < 4; i++) {
        EffectEntry *entry = &((EffectEntry *)(table->base + 0x58))[i];
        if (libc_strcmp(DAT_0040090c, entry->name) == 0) {
            return entry->value;
        }
    }
    return result;
}

} /* extern "C" */
