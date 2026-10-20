/* Registers a 4-slot request for `id`, keyed by the table-6 handle, with the callback at 0x2DCA98. */
#include "common.h"

extern "C" {

extern u32 dataTableGetCount(u32 table);
extern u32 dataTableGetEntries(void);
extern u32 dataTableGet(s32 group, s32 id);
extern void FUN_002b46f8(u16 *request, u32 owner, u32 table, s32 count, void *callback);

void FUN_0029e974(u16 id)
{
    u32 table = dataTableGet(6, 1);
    u32 owner = dataTableGetEntries();
    u16 request[2];

    table = dataTableGetCount(table);
    request[0] = id;
    FUN_002b46f8(request, owner, table, 4, (void *)0x002DCA98);
}

}
