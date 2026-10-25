#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

/* Stores a parameter only while the work is idle. */
bool optionalParameterTrySet(OptionalParameterWork *work, u32 parameter)
{
    bool stored = false;
    if (work->state == 0) {
        work->parameter = parameter;
        stored = true;
    }
    return stored;
}

} /* extern "C" */
