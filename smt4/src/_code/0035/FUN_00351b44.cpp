#include "common.h"

extern "C" {

int serviceCloseInitializedHandle(u32 *block);
extern u32 DAT_00471bac;

void FUN_00351b44(void)
{
    serviceCloseInitializedHandle(&DAT_00471bac);
}

} /* extern "C" */
