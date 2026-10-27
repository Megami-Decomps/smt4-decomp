#include "nw/math/MTX44.h"

using nw::math::MTX44;

extern "C" {
void mtx44Copy(MTX44 *destination, const MTX44 *source);

/* Copies the 4x4 identity matrix into the destination and returns it. */
MTX44 *mathCopyIdentityMatrix(MTX44 *destination)
{
    mtx44Copy(destination, &MTX44::Identity());
    return destination;
}
}
