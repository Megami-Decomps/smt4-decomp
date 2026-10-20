/* The pool's alignment pad (armcc placed it behind a preceding library function) is the only difference in the disassembly. */
#include "common.h"

extern "C" {

typedef struct LocaleCategory {
    /* 0x0 */ u32 unk0;
    /* 0x4 */ u32 unk4;
} LocaleCategory; /* 0x8 bytes */

extern LocaleCategory DAT_0064bfbc[];

/* Returns the table entry of locale category `category`; the first argument is unused. */
LocaleCategory *libcLocaleGetCategory(u32 locale, s32 category)
{
    return &DAT_0064bfbc[category];
}

} /* extern "C" */
