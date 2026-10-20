#include "common.h"

extern "C" {

int FUN_001a7dbc(...);
extern int FUN_002a8740(void *record);

void FUN_0029c1c8(void *record, u32 a, u32 b)
{
    int owner = FUN_002a8740(record);

    if (owner != 0) {
        FUN_001a7dbc(owner, record, a, b);
        return;
    }
}

} /* extern "C" */
