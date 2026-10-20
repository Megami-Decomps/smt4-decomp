#include "common.h"

extern "C" {

int FUN_001a7dbc(...);
extern int gameGetUnitRecord(void *record);

void FUN_0029c1c8(void *record, u32 a, u32 b)
{
    int owner = gameGetUnitRecord(record);

    if (owner != 0) {
        FUN_001a7dbc(owner, record, a, b);
        return;
    }
}

} /* extern "C" */
