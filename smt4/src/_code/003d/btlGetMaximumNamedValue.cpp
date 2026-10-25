/* NON_MATCHING: retail spells out four checks and retains an unused 9999 literal load; the readable loop is not unrolled by this compiler. */
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
    for (s32 i = 0; i < 4; ++i) {
        if (libc_strlen(values->entries[i].name) &&
            libc_strcmp(values->entries[i].name, "0") != 0 &&
            values->entries[i].value >= 0 &&
            values->entries[i].value > maximum)
            maximum = values->entries[i].value;
    }
    return maximum;
}
}
