#include "common.h"

extern "C" {

extern void *DAT_0043ddb8;
void *FUN_00357818(u32 id);
void asdCecCanOpenMessageBox(void *item, void *context);

/* Applies the menu context to the selected resource. */
void FUN_003bbc7c()
{
    void *item = FUN_00357818(0xe5c);
    asdCecCanOpenMessageBox(item, DAT_0043ddb8);
}

}
