#include "gamedata/NameLabelTable.h"

/* Orders records by their leading 16-bit key. */
extern "C" s32 arrayCompareSignedHalfword(const void *left, const void *right)
{
    return *static_cast<const s16 *>(left) - *static_cast<const s16 *>(right);
}
