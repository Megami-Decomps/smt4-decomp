/* NON_MATCHING: retail literal relocation is at a halfword-aligned pool address; compiler uses a word-aligned pool. */
#include "common.h"

extern "C" {

typedef struct LocaleCategory {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
} LocaleCategory; /* 0x8 bytes */

extern LocaleCategory DAT_004efce4[];

/* Returns the table entry of locale category `category`; the first argument is unused. */
LocaleCategory *libcLocaleGetCategory(u32 locale, s32 category)
{
    return &DAT_004efce4[category];
}

} /* extern "C" */
