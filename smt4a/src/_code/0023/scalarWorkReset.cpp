#include "shard/W5_W5Match1_RecordKeys.h"

extern "C" {

extern u32 scrGetArg(u32 index);
extern ScriptScalarWork *jobGetWork(u32 job);

/* Clears the job work scalar and its speed. */
u32 scalarWorkReset(void)
{
    ScriptScalarWork *work = jobGetWork(scrGetArg(0));
    if (work != NULL) {
        work->value = 0.0f;
        work->speed = 0.0f;
    }
    return 1;
}

} /* extern "C" */
