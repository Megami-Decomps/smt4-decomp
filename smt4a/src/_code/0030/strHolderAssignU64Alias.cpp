#include "common.h"

extern "C" {

void strHolderAssignU64(void);

/* Forwards to strHolderAssignU64. */
void strHolderAssignU64Alias(void)
{
    strHolderAssignU64();
}

} /* extern "C" */
