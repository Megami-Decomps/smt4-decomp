#include "mobiclip_ctrl/S4FsReader.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/ResultReport.h"

extern "C" {
void nn_os_CriticalSection_Enter(void *section);
void nn_os_CriticalSection_Leave(void *section);

/* Moves the reader to `position` (inside the movie): resets the ring positions, seeks the source and wakes the reader thread. Returns 0 when the position is past the end. */
u32 FUN_00212008(S4FsReader *reader, s64 position)
{
    if (reader->limit < position) {
        return 0;
    }
    nn_os_CriticalSection_Enter(reader->lock);
    reader->requested = position;
    reader->consumed = position;
    reader->produced = position;
    reader->source->seek(position, 0);
    nn_os_CriticalSection_Leave(reader->lock);
    s32 result = nn::svc::SignalEvent(reader->dataEvent);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        FUN_002c526c(result, failed);
    }
    return 1;
}

} /* extern "C" */
