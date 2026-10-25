#include "shard/W5_W5Match1_RecordKeys.h"
#include "shard/JobWork.h"

extern "C" {

extern u32 scrGetArg(u32 index);

/* Clears the job work scalar and its speed. */
u32 scalarWorkReset(void)
{
    ScriptScalarWork *work = (ScriptScalarWork *)jobGetWork(scrGetArg(0));
    if (work != NULL) {
        work->value = 0.0f;
        work->speed = 0.0f;
    }
    return 1;
}

} /* extern "C" */
