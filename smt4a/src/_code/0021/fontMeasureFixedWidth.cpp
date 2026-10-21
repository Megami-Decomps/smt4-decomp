/* NON_MATCHING: multiply operands are reversed between r0 and r4. */
#include "common.h"

extern "C" {

s32 wstrlen(const u16 *text);
s32 resourceQueryByIndex(u32 font);
s32 fontMeasureFixedWidth(const u16 *text)
{
    s32 length = wstrlen(text);
    return resourceQueryByIndex(1) * length;
}

} /* extern "C" */
