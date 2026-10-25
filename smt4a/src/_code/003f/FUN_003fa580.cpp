/* NON_MATCHING: retail does not hoist the constant 8 (loads it at each use, frame 12 with push {r4,r5,lr}) and keeps the three finishing sequences separate with the result store first; this build hoists 8 into r6 (frame 16) and merges/reorders them. Same as FUN_003fa1c8. */
#include "network/DataStore/DataStoreMain.h"
#include "classes/OnlineResult.h"
#include "network/Common/CTRNetInit.h"

extern "C" {

OnlineResult FUN_00123bd8(DataStoreLink *link);
void _ZN18OnlineResultRecordaSERKS_(DataStoreWordTriple *dest, const OnlineResult &source);
s32 _ZNK18OnlineResultRecord7isValidEv(const DataStoreWordTriple *header);
void *FUN_00111800(DataStoreWordTriple *header);

/* Waits for the server's reply (or, without one, builds the header from the link): a non-negative header moves on to
 * step 8, a negative one ends the step in failure. Returns 1 once the reply was handled. */
s32 FUN_003fa580(DataStoreWork *work)
{
    if (FUN_00432acc() != 0) {
        if (work->transfer.reply != NULL && work->transfer.reply->isDone()) {
            _ZN18OnlineResultRecordaSERKS_(&work->header, *(const OnlineResult *)work->transfer.reply->getHeader());
            if (_ZNK18OnlineResultRecord7isValidEv(&work->header)) {
                work->initialState[0] = 8;
            } else {
                work->finishAtStep8(FUN_00111800(&work->header));
            }
            return 1;
        }
        _ZN18OnlineResultRecordaSERKS_(&work->header, FUN_00123bd8(work->transfer.link));
        if (!_ZNK18OnlineResultRecord7isValidEv(&work->header)) {
            work->finishAtStep8(FUN_00111800(&work->header));
        }
        return 0;
    }
    work->finishAtStep8(NULL);
    return 1;
}

} /* extern "C" */
