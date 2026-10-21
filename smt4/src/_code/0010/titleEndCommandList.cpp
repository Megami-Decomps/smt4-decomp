#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern TitleCommandLists g_titleFlags;
extern s32 FUN_002c5210(void);
extern void asdGxCommandListEnd(u32 commandList, u32 flags);

/* Finishes the enabled title command list. */
s32 titleEndCommandList(void)
{
    if (g_titleFlags.flags[0] == 0 && FUN_002c5210() == 1 && g_titleFlags.flags[1] != 0) {
        asdGxCommandListEnd(g_titleFlags.endList, 1);
    }
    return 0;
}

} /* extern "C" */
