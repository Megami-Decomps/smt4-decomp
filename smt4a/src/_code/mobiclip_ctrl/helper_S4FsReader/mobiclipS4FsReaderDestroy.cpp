/* NON_MATCHING: near (87 vs 86 rows): handle closes through NnOsHandle and delete of DAT_005880f8.object now match retail; remaining: retail hoists `mov r6, #0` before svc 0x24 and addresses `produced` through `add r7, r4, #8`. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/Thread.h"
#include "battle/BtlStageStackRegion.h"
#include "mobiclip_ctrl/S4FsReader.h"
#include "sys/ResultReport.h"
#include "AsdSDK/AsdMemAlloc.h"
#include "AsdSDK/AsdMemUtil.h"

extern "C" {
s32 svcWaitSynchronization1(u32 handle, s64 timeout);
}

/* The player object living inside DAT_005880f8's allocation. */
struct S4MovieObject : AddressSpaceRegion {
    ~S4MovieObject() { addressSpaceRegionFree(this); }
    static void operator delete(void *object) { asdOperatorDelete(object); }
};

/* The Mobiclip player's allocation: the block and the object living in it. */
struct S4MovieAllocation {
    void *block;
    S4MovieObject *object;
};

/* A volatile 64-bit stream position field (consumed/produced). */
struct S4PositionField {
    volatile s64 value;
    void set(s64 v) { value = v; }
};

extern "C" {
extern S4MovieAllocation DAT_005880f8;

static __inline void checkSyncResult(s32 result)
{
    bool failed = nnResultIsFailure(result);
    if (failed) {
        resultHandleFailure(result, failed);
    }
}

/* Stops the reader thread, closes its handles and frees the buffers and the player's allocation. */
void mobiclipS4FsReaderDestroy(S4FsReader *reader)
{
    if (reader->source == NULL) {
        return;
    }
    checkSyncResult(nn::svc::SignalEvent(reader->stopEvent));
    checkSyncResult(svcWaitSynchronization1(reader->threadHandle, -1));
    reader->threadJoined = 1;
    ((NnOsThread *)&reader->threadHandle)->finalize();
    ((NnOsHandle *)&reader->threadHandle)->~NnOsHandle();
    addressSpaceRegionFree(DAT_005880f8.object);
    delete DAT_005880f8.object;
    DAT_005880f8.object = NULL;
    asdMemFree(DAT_005880f8.block);
    DAT_005880f8.block = NULL;
    *(s32 *)(reader->lock + 8) = -1;
    ((NnOsHandle *)&reader->dataEvent)->~NnOsHandle();
    ((NnOsHandle *)&reader->stopEvent)->~NnOsHandle();
    if (reader->ring != NULL) {
        reader->allocator->release(reader->ring);
        reader->ring = NULL;
    }
    if (reader->scratch != NULL) {
        reader->allocator->release(reader->scratch);
        reader->scratch = NULL;
    }
    reader->scratchSize = 0;
    ((S4PositionField *)&reader->consumed)->set(0);
    ((S4PositionField *)&reader->produced)->set(0);
    reader->source = NULL;
    reader->allocator = NULL;
    reader->requested = 0;
}

} /* extern "C" */
