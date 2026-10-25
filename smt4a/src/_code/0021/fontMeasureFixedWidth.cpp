#include "common.h"

extern "C" {

s32 libc_strlen(const u16 *text);
s32 resourceQueryByIndex(u32 font);
s32 fontMeasureFixedWidth(const u16 *text)
{
    s32 length = libc_strlen(text);
    return resourceQueryByIndex(1) * length;
}

} /* extern "C" */
