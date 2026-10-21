#include "common.h"

extern "C" {

u16 FUN_0049c9a0(const u16 *id);

/* Compares the values associated with two record IDs. */
int recordCompareValues(const u16 *leftId, const u16 *rightId)
{
    int leftValue = FUN_0049c9a0(leftId);
    int rightValue = FUN_0049c9a0(rightId);
    return leftValue - rightValue;
}

} /* extern "C" */
