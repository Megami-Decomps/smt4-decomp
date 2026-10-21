/* NON_MATCHING: compiler loads the pool directly into r0 instead of using retail's r2-to-r0 move. */
#include "common.h"

struct RecordPool;

extern "C" {

extern RecordPool DAT_004c3828;
extern void FUN_002b3194(RecordPool *pool, void *record);

/* Returns an allocated record to its pool. */
void FUN_001df8b4(void *record)
{
    if (record != NULL) {
        FUN_002b3194(&DAT_004c3828, record);
    }
}

} /* extern "C" */
