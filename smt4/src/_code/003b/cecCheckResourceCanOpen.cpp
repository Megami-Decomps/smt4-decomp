#include "common.h"

extern "C" {

extern void *g_cecCardBox;
void *cecMakeResourceId(u32 id);
void asdCecCanOpenMessageBox(void *item, void *context);

/* Applies the menu context to the selected resource. */
void cecCheckResourceCanOpen()
{
    void *item = cecMakeResourceId(0xe5c);
    asdCecCanOpenMessageBox(item, g_cecCardBox);
}

}
