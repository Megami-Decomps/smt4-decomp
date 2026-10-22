#include "classes/Obj420a2c.h"

extern "C" {
int FUN_00423d7c(Obj420a2c *self);
int FUN_00423700(Obj420a2c *self, Obj420a2cSource *source, u32 *handle,
                 Obj420a2cEntry *entry, u32 *out);

/* Builds each present source's entry, stopping at the first failure. */
} /* extern "C" */

int Obj420a2c::buildEntries()
{
    Obj420a2c *self = this;
    if (!FUN_00423d7c(self)) {
        return 0;
    }
    if (self->sourceA != NULL &&
        !FUN_00423700(self, self->sourceA, &self->handles[0],
                      &self->entries[0], &self->outA[0])) {
        return 0;
    }
    if (self->sourceB != NULL) {
        if (self->sourceB->type != 6) {
            return 0;
        }
        if (!FUN_00423700(self, self->sourceB, &self->handles[2],
                          &self->entries[2], &self->outB[0])) {
            return 0;
        }
        self->flags = 0x401;
    }
    return 1;
}

