/* NON_MATCHING: vector reserve storage/count arithmetic and growth branches differ; native object fields and0x100 capacities preserved. */
#include "classes/Obj557c48.h"

/* Clears the table and reserves room for 0x100 words and 0x100 entries. */
Obj557c48::Obj557c48() : shader(0), camera(0), commandQueue(0), shadowMapState(0), scale(1.0f), flags(0), resource(0), scratch(0)
{
    objects.reserve(0x100);
    entries.reserve(0x100);
}
