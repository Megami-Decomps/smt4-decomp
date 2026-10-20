#include "shard/Shard0035.h"

extern "C" {

extern s32 dataTable23Type0FindIndexById(s32 value);
extern void FUN_002d23f0(s32 id);
extern void FUN_00274970(s32 value);

void applyIfIdValid(s32 value)
{
    s32 id = dataTable23Type0FindIndexById(value);

    if (id != -1) {
        FUN_002d23f0(id);
        FUN_00274970(value);
    }
}

} /* extern "C" */
