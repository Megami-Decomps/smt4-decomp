#include "common.h"

extern "C" {
void *dataTable40FindById(u32 id);
s32 FUN_00258de0(u32 user, s32 target, void *record, s32 apply, s32 *result);

// Resolve table 4's record and apply it to the requested target.
s32 FUN_002621b4(u32 user, s32 target, u32 id, s32 *result)
{
    *result = 0;
    void *record = dataTable40FindById(id);
    if (record == NULL) {
        return 1;
    }
    return FUN_00258de0(user, target, record, 1, result);
}
}
