#include "common.h"
#include "gamedata/DataTable40.h"

extern "C" {

s32 FUN_0029a924(u32 id);

/* Compares two ids by their FUN_0029a924 value; ids that are zero or have no record compare equal (0). */
s32 unitCompareByPriorityValue(const u16 *left, const u16 *right)
{
    if (*left == 0) {
        return 0;
    }
    if (*right == 0) {
        return 0;
    }
    void *leftRecord = dataTable40FindById(*left);
    void *rightRecord = dataTable40FindById(*right);
    if (leftRecord == NULL) {
        return 0;
    }
    if (rightRecord == NULL) {
        return 0;
    }
    return (s16)FUN_0029a924(*left) - (s16)FUN_0029a924(*right);
}

} /* extern "C" */
