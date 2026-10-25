#include "common.h"

extern "C" {

int FUN_001a7dbc(...);
extern int gameGetUnitRecord(u32 id);

/* Forwards (record, id, a, b) to FUN_001a7dbc for the unit record of `id`, when there is one. */
void FUN_0029c1c8(u32 id, u32 a, u32 b)
{
    int owner = gameGetUnitRecord(id);

    if (owner != 0) {
        FUN_001a7dbc(owner, id, a, b);
        return;
    }
}

} /* extern "C" */
