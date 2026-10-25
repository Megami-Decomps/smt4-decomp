#include "common.h"

extern "C" {

const char *lookupTable5B47A0(u32 index);
const char *lookupTable5B47D0(u32 index);
s32 FUN_0043c2d4(char *buffer, const char *format, ...);
void rt_memcpy(void *dest, const void *src, u32 size);

/* The message label format of an entry field. */
static const char *labelFormat(u32 field)
{
    switch (field) {
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

/* Builds the message label of `field` (name, sort name, descriptions, disclaimer, icon) for
 * the entry named by the two table indices, e.g. "NA_NAME_<group>_<item>". */
void FUN_00426eb8(char *label, u32 field, u32 groupIndex, u32 itemIndex)
{
    char buffer[0x44];

    FUN_0043c2d4(buffer, labelFormat(field), lookupTable5B47D0(groupIndex),
                 lookupTable5B47A0(itemIndex));
    rt_memcpy(label, buffer, 0x40);
}

} /* extern "C" */
