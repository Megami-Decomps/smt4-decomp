#include "common.h"
#include "gamedata/Table04Record.h"

extern "C" {
s32 FUN_0028809c(u32 user, s32 target, void *record, s32 apply, s32 *result);

// Resolve table 4's record and apply it to the requested target.
s32 FUN_002c7bb0(u32 user, s32 target, u32 id, s32 *result)
{
    *result = 0;
    void *record = dataTable04FindById(id);
    if (record == NULL) {
        return 1;
    }
    return FUN_0028809c(user, target, record, 1, result);
}
}
