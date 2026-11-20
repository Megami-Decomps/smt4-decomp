#include "common.h"

extern "C" {
extern void *g_cecCardBox;
void *cecMakeResourceId(u32 id);
s32 asdCecCanOpenMessageBox(void *item, void *context);
void cecMessageBoxApplyOperation(void *item);
/* Refreshes the selected resource when the menu context accepts it. */
void cecRefreshAcceptedContextResource()
{
    if (asdCecCanOpenMessageBox(cecMakeResourceId(0xe5c), g_cecCardBox))
        cecMessageBoxApplyOperation(cecMakeResourceId(0xe5c));
}
}
