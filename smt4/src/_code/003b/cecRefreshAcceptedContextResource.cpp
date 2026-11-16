#include "common.h"

extern "C" {
extern void *g_cecCardBox;
void *cecMakeResourceId(u32 id);
s32 asdCecCanOpenMessageBox(void *item, void *context);
void FUN_002d55b4(void *item);
/* Refreshes the selected resource when the menu context accepts it. */
void cecRefreshAcceptedContextResource()
{
    if (asdCecCanOpenMessageBox(cecMakeResourceId(0xe5c), g_cecCardBox))
        FUN_002d55b4(cecMakeResourceId(0xe5c));
}
}
