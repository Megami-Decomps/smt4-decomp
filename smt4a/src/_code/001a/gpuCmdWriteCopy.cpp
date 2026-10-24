/* Writes a GPU memory-copy command at `cursor`: the size and header words, a patch slot (its address goes to
 * *patchSlot), the source's physical address, the destination (the word right after the command) and a trigger word.
 * Returns the cursor after the command. */
#include "common.h"

extern "C" {
u32 asdGxGetPhysicalAddress(const void *address);

u32 *gpuCmdWriteCopy(u32 *cursor, u32 **patchSlot, const void *source, u32 size)
{
    *cursor++ = size >> 3;
    *cursor++ = 0x804F0238;
    *patchSlot = cursor;
    *cursor++ = 0;
    *cursor++ = asdGxGetPhysicalAddress(source) >> 3;
    *cursor++ = asdGxGetPhysicalAddress(cursor + 2) >> 3;
    *cursor++ = 1;
    return cursor;
}
}
