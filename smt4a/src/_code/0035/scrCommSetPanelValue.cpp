#include "shard/Shard0035.h"

extern "C" {

extern u32 DAT_005710e0;
extern u32 scrGetArg(s32 index);
extern u8 FUN_0034919c(void);
extern u32 panelSetMode3(u32 value, u8 flag);

/* Script command: remembers argument 0 and, when the panel is ready, applies it. */
u32 scrCommSetPanelValue(s32 argIndex)
{
    DAT_005710e0 = scrGetArg(argIndex);
    if (FUN_0034919c() != 0) {
        panelSetMode3(DAT_005710e0, 0);
    }
    return 1;
}

} /* extern "C" */
