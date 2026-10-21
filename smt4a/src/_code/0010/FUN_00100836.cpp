/* NON_MATCHING: retail uses Thumb movs while compiler emits mov and schedules argument moves differently. */
#include "common.h"

extern "C" {
void *libcLocaleGetCategory(void *locale, s32 category);
u32 FUN_002e3c44(u32 unused, const char *text, u32 count, void *locale);

/* Uses the default locale category when the caller supplies none. */
u32 FUN_00100836(const char *text, u32 count, void *locale)
{
    if (locale == NULL) {
        locale = libcLocaleGetCategory(locale, 4);
    }
    return FUN_002e3c44(0, text, count, locale);
}
}
