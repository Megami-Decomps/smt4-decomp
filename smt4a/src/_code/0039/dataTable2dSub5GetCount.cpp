/* Looks up the message text for message group 0x2d, entry 5. */
#include "common.h"

extern "C" {

u32 dataTableGet(u32 group, u32 entry);
u32 dataTableGetCount(u32 id);

u32 dataTable2dSub5GetCount(void)
{
    u32 group = 0x2d;

    return dataTableGetCount(dataTableGet(group, 5));
}

} /* extern "C" */
