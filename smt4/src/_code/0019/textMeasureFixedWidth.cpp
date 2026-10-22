#include "common.h"

extern "C" {

extern u32 libc_strlen(const char *text);
extern u32 resourceQueryByIndex(u32 mode);

/* Computes the text width using the current fixed character width. */
u32 textMeasureFixedWidth(const char *text)
{
    u32 length = libc_strlen(text);
    return resourceQueryByIndex(0) * length;
}

} /* extern "C" */
