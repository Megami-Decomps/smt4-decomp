#include "common.h"

extern "C" {
extern void *g_cecCardBox;
void *FUN_00357818(u32 id);
s32 asdCecCanOpenMessageBox(void *item, void *context);
void FUN_002d55b4(void *item);
/* Refreshes the selected resource when the menu context accepts it. */
void cecRefreshAcceptedContextResource()
{
    if (asdCecCanOpenMessageBox(FUN_00357818(0xe5c), g_cecCardBox))
        FUN_002d55b4(FUN_00357818(0xe5c));
}
}
