/* NON_MATCHING: C-form destructor preserves the owner in r4; retail recovers it from the member destructor's returned this. */
#include "classes/Obj4223c4.h"

extern "C" {
extern const u32 _ZTV9Obj42247c[];
void asdMemFreeNonNull(void *allocation);

// Tear down the selection interface and release the compendium menu.
void _ZN9Obj4223c4D0Ev(Obj4223c4 *self)
{
    *reinterpret_cast<const u32 **>(self) = _ZTV9Obj42247c + 2;
    self->touchSelection.~Obj55ca08();
    asdMemFreeNonNull(self);
}
}
