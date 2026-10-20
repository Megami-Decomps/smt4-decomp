#include "common.h"

extern "C" {

void strHolderAssignU32(void);

/* Forwards to strHolderAssignU32. */
void strHolderAssignU32Alias(void)
{
    strHolderAssignU32();
}

} /* extern "C" */
