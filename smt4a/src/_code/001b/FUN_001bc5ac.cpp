/* NON_MATCHING: C library code (position independent: --cpu=5TE --apcs=/interwork/ropi); the two strings at 0x567054 / 0x56705c were not read from the image, so the "C" literals are an inference, and armcc here folds the guards into conditional instructions where retail branches */
/* setlocale: only the "C" locale exists. Returns its name for a query, an empty name or "C"; NULL for any other locale. */
#include "common.h"

extern "C" {
int libc_strcmp(const char *a, const char *b);

const char *FUN_001bc5ac(s32 category, const char *locale)
{
    if (locale != NULL && *locale != '\0' && libc_strcmp("C", locale) != 0) {
        return NULL;
    }
    return "C";
}
}
