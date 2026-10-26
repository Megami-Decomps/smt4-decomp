/* NON_MATCHING: the four entry checks are spelled out as in retail; retail also keeps an unused 9999 literal load in r6 and does not fold the first block's compare against the initial zero. */
#include "battle/BtlMainAccess.h"
#include "common.h"

struct NamedBattleValue {
    /* 0x00 */ char name[16];
    /* 0x10 */ s16 value;
    /* 0x12 */ u8 unk12[4];
};

struct NamedBattleValues {
    /* 0x0000 */ u8 unk0000[0x1cfc];
    /* 0x1cfc */ NamedBattleValue *entries;
};

extern "C" {
s32 FUN_00293230(void *state);
u32 libc_strlen(const char *);
s32 libc_strcmp(const char *, const char *);

// Return the largest valid value among the four named entries, or -1 when unavailable.
s32 btlGetMaximumNamedValue(NamedBattleValues *values)
{
    if (values->entries == NULL || FUN_00293230(static_cast<void *>(btlGetMainState())))
        return -1;
    s32 maximum = 0;
    if (libc_strlen(values->entries[0].name) &&
        libc_strcmp(values->entries[0].name, "0") != 0 &&
        values->entries[0].value >= 0 &&
        values->entries[0].value > maximum)
        maximum = values->entries[0].value;
    if (libc_strlen(values->entries[1].name) &&
        libc_strcmp(values->entries[1].name, "0") != 0 &&
        values->entries[1].value >= 0 &&
        values->entries[1].value > maximum)
        maximum = values->entries[1].value;
    if (libc_strlen(values->entries[2].name) &&
        libc_strcmp(values->entries[2].name, "0") != 0 &&
        values->entries[2].value >= 0 &&
        values->entries[2].value > maximum)
        maximum = values->entries[2].value;
    if (libc_strlen(values->entries[3].name) &&
        libc_strcmp(values->entries[3].name, "0") != 0 &&
        values->entries[3].value >= 0 &&
        values->entries[3].value > maximum)
        maximum = values->entries[3].value;
    return maximum;
}
}
