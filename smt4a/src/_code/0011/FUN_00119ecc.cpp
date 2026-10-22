/* NON_MATCHING: forwarding body is correct, but the three argument-swap moves use the opposite scratch register. */
#include "common.h"

class Obj55a254;
extern "C" void FUN_00119e2c(void *destination, Obj55a254 *source);

// Forward the virtual copy operation to the common implementation.
extern "C" void FUN_00119ecc(Obj55a254 *self, void *destination)
{
    FUN_00119e2c(destination, self);
}
