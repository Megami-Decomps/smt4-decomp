#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Returns the optional work value, or zero when no work exists. */
u32 optionalWorkGetValue(const OptionalWorkValue *work)
{
    return work != NULL ? work->value : 0;
}

} /* extern "C" */
