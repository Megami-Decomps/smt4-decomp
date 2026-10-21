/* NON_MATCHING: compiler releases stack arguments with add/pop instead of retail's single pop. */
#include "common.h"
extern "C" {
void *strHolderAssignU32(void *holder, const u32 *value);
/* Assigns a numeric value through the string holder's scalar adapter. */
void *FUN_00303d3a(void *holder, u32 value)
{
    return strHolderAssignU32(holder, &value);
}
}
