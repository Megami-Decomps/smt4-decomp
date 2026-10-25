#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern Vector4 DAT_00636f58;
extern Vector4 *DAT_005b3ce8;

/* Initializes the default four-component vector to one. */
void mathInitDefaultUnitVector(void)
{
    Vector4 *vector = &DAT_00636f58;
    vector->w = vector->z = vector->y = vector->x = 1.0f;
    DAT_005b3ce8 = vector;
}

} /* extern "C" */
