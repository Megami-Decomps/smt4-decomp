#include "classes/Obj420a2c.h"

extern "C" {
int FUN_0034f768(Obj420a2c *self);
int FUN_0034f0fc(Obj420a2c *self, Obj420a2cSource *source, u32 *handle, Obj420a2cEntry *entry, u32 *out);
}

/* Builds the entry of each present source; fails when the first step or a source does. */
int Obj420a2c::buildEntries()
{
    if (!FUN_0034f768(this)) {
        return 0;
    }
    if (sourceA != NULL && !FUN_0034f0fc(this, sourceA, &handles[0], &entries[0], &outA[0])) {
        return 0;
    }
    if (sourceB != NULL) {
        if (sourceB->type != 6) {
            return 0;
        }
        if (!FUN_0034f0fc(this, sourceB, &handles[2], &entries[2], &outB[0])) {
            return 0;
        }
        flags = 0x401;
    }
    return 1;
}
