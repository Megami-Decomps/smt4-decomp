#include "common.h"

extern "C" {

typedef struct Pool Pool;

void *asdOperatorNew(u32 size);
Pool *_ZN13EffGeomRecordC1Ev(void *memory);
s32 recordPrepareActive(Pool *pool, u32 buffer, s32 sizeA, s32 sizeB);

/* Allocates and constructs a pool, then sizes it for `count` items (6 and 4 slots each). */
Pool *poolCreate(s32 count, u32 buffer)
{
    void *memory = asdOperatorNew(0x7E8);
    Pool *pool;

    if (memory == NULL) {
        pool = NULL;
    } else {
        pool = _ZN13EffGeomRecordC1Ev(memory);
    }
    recordPrepareActive(pool, buffer, count * 6, count << 2);
    return pool;
}

} /* extern "C" */
