#include "AsdSDK/Source/Sys/File/AsdFilePath.h"

extern "C" {
void *libcLocaleGetCategory(void *locale, s32 category);

/* Uses the default locale category when the caller supplies none. */
u32 FUN_00100836(const char *text, u32 count, AsdPathMbState *locale)
{
    if (locale == NULL) {
        locale = (AsdPathMbState *)libcLocaleGetCategory(locale, 4);
    }
    return FUN_002e3c44(0, text, count, locale);
}
}
