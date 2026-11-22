#include "common.h"
#include "map/MapVector.h"
#include "code/Code0050_Smt4a.h"

extern "C" {

/* Returns the vector scaled by `scale`. */
MapVector mapVectorScaled(const MapVector *vector, f32 scale)
{
    MapVector scaled;
    mapVectorScale(&scaled, vector, scale);
    return scaled;
}

} /* extern "C" */
