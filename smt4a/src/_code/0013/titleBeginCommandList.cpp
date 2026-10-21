#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern TitleCommandLists g_titleFlags;
extern s32 FUN_001696f4(void);
extern void asdGxCommandListBegin(u32 commandList);

/* Begins the enabled title command list. */
s32 titleBeginCommandList(void)
{
    if (g_titleFlags.flags[0] == 0 && FUN_001696f4() == 1 && g_titleFlags.flags[1] != 0) {
        asdGxCommandListBegin(g_titleFlags.beginList);
    }
    return 0;
}

} /* extern "C" */
