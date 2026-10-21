#include "common.h"

extern "C" {

extern void *DAT_0043ddb8;
void *FUN_00357818(u32 id);
void FUN_0022ad9c(void *item, void *context);

/* Applies the menu context to the selected resource. */
void FUN_003bbc7c()
{
    void *item = FUN_00357818(0xe5c);
    FUN_0022ad9c(item, DAT_0043ddb8);
}

}
