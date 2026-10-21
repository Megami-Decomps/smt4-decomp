#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Returns the work area scalar. */
f32 workScalarGet(const WorkScalar *work)
{
    return work->value;
}

} /* extern "C" */
