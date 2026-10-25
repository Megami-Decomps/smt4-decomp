/* NON_MATCHING: dest and the first ID trade callee-saved registers with the second name (r5/r7 vs r6/r5). */
#include "common.h"

extern "C" {

const char *FUN_0035a010(u32 value);
const char *FUN_0035a060(u32 value);
s32 stringFormatUnbounded(char *dest, const char *format, ...);
void rt_memcpy(void *dest, const void *src, u32 size);

static inline const char *naKeyFormat(u32 kind)
{
    switch (kind) {
    case 0:
        return "NA_NAME_%s_%s";
    case 1:
        return "NA_SORT_NAME_%s_%s";
    case 2:
        return "NA_DESCRIPTION_SHORT_%s_%s";
    case 3:
        return "NA_DESCRIPTION_LONG_%s_%s";
    case 4:
        return "NA_DISCLAIMER_%s_%s";
    case 5:
        return "NA_ICON_INDEX_%s_%s";
    default:
        return NULL;
    }
}

// Build the NA_* text key of the given kind (name, sort name, descriptions, disclaimer, icon) for two IDs.
void FUN_00234330(char *dest, u32 kind, u32 first, u32 second)
{
    char key[64];
    stringFormatUnbounded(key, naKeyFormat(kind), FUN_0035a010(first), FUN_0035a060(second));
    rt_memcpy(dest, key, 0x40);
}

} /* extern "C" */
