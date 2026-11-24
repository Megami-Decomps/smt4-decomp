#include "common.h"
#include "addon/AocCatalogQuery.h"

extern "C" {

const char *lookupTable5B47D0(u32 value);
const char *lookupTable5B47A0(u32 value);
s32 stringFormatUnbounded(char *dest, const char *format, ...);

static const char *naKeyFormat(u32 kind)
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
AocAttributeName aocItemAttributeLabel(u32 kind, u32 first, u32 second)
{
    char key[0x44];
    stringFormatUnbounded(key, naKeyFormat(kind), lookupTable5B47D0(first), lookupTable5B47A0(second));
    /* the label is the text's first 0x40 bytes (a byte copy: the name has no alignment) */
    return *(AocAttributeName *)key;
}

} /* extern "C" */
