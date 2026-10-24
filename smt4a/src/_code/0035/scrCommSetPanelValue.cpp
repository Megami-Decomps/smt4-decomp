#include "shard/Shard0035.h"

extern "C" {

extern u32 g_btlMessageFlagMasks;
extern u32 scrGetArg(s32 index);
extern u8 FUN_0034919c(void);
extern u32 panelSetMode3(u32 value, u8 flag);

/* Script command: remembers argument 0 and, when the panel is ready, applies it. */
u32 scrCommSetPanelValue(void)
{
    g_btlMessageFlagMasks = scrGetArg(0);
    if (FUN_0034919c() != 0) {
        panelSetMode3(g_btlMessageFlagMasks, 0);
    }
    return 1;
}

} /* extern "C" */
