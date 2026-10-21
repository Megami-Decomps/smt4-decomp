/* NON_MATCHING: compiler materializes zero after the call instead of preserving it in r4. */
#include "common.h"
extern "C" {
void *dataTable04FindById(u32 id);
/* Resolves the requested record and returns the callback's zero result. */
s32 FUN_002a6a24(u32 id) {
    dataTable04FindById(id);
    return 0;
}
}
