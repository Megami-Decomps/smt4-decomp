/* Binds the command list stored at `index` of `lists` (tail call into nngxBindCmdlist, placed right after). */
#include "common.h"

extern "C" {
void nngxBindCmdlist(u32 list);

void asdGxBindCmdlistAt(const u32 *lists, s32 index)
{
    nngxBindCmdlist(lists[index]);
}
}
