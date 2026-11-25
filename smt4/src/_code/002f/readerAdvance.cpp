#include "mobiclip_ctrl/S4FsReader.h"
#include "nn/Result.h"
#include "nn/svc.h"
#include "sys/ResultReport.h"

extern "C" {

/* Advances the movie reader by `count` bytes and wakes its worker; returns 0 if past the end. */
u32 readerAdvance(S4FsReader *reader, u32 count)
{
    if (reader->limit - reader->requested < (s64)count) {
        return 0;
    }
    reader->requested += count;
    reader->consumed += count;
    s32 result = nn::svc::SignalEvent(reader->dataEvent);
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
    return 1;
}

} /* extern "C" */
