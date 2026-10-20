#include "shard/VObject.h"

extern "C" {

extern const u8 DAT_0055c19c[];  /* vtable */

/* Constructor: sets the vtable. */
void constructObj0055c19c(VObject *self)
{
    self->vtbl = DAT_0055c19c;
}

} /* extern "C" */
