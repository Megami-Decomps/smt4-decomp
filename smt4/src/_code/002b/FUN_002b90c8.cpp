/* NON_MATCHING: retail uses Thumb movs while compiler emits mov and schedules argument moves differently. */
#include "common.h"

extern "C" {
void *libcLocaleGetCategory(void *locale, s32 category);
u32 FUN_002c618c(u32 unused, const char *text, u32 count, void *locale);

/* Uses the default locale category when the caller supplies none. */
u32 FUN_002b90c8(const char *text, u32 count, void *locale)
{
    if (locale == NULL) {
        locale = libcLocaleGetCategory(locale, 4);
    }
    return FUN_002c618c(0, text, count, locale);
}
}
