#include "common.h"

extern "C" {

u16 recordGetCompareValue(const u16 *id);

/* Compares the values associated with two record IDs. */
int recordCompareValues(const u16 *leftId, const u16 *rightId)
{
    int leftValue = recordGetCompareValue(leftId);
    int rightValue = recordGetCompareValue(rightId);
    return leftValue - rightValue;
}

} /* extern "C" */
