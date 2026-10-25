#include "classes/Obj420a2c.h"

extern "C" bool mobiclipDecoderSetSources(Obj420a2c *self, Obj420a2cOwner *owner,
                            Obj420a2cSource *sourceA, Obj420a2cSource *sourceB)
{
    if (owner == NULL) {
        return false;
    }
    self->owner = owner;
    self->sourceA = sourceA;
    self->sourceB = sourceB;
    return true;
}
