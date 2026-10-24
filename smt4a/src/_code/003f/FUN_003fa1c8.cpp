/* NON_MATCHING: retail does not hoist the constant 9 (only 1, in r5), reads the sign bit with `ands #0x80000000; bpl`, and shares the B/C return; control flow, loads and the virtual calls match. */
#include "network/DataStore/DataStoreMain.h"
#include "nn/Result.h"

extern "C" {

s32 FUN_00432acc(void);
void _ZN18OnlineResultRecordaSERKS_(DataStoreWordTriple *dest, const DataStoreWordTriple *source);
s32 _ZNK18OnlineResultRecord7isValidEv(const DataStoreWordTriple *header);
void *FUN_00111800(DataStoreWordTriple *header);
void *FUN_00442218(s32 *result);

/* Polls the pending request: when it is done, takes its header and result and moves on. */
s32 FUN_003fa1c8(DataStoreWork *work)
{
    if (FUN_00432acc() != 0) {
        if (work->transfer.request != NULL && work->transfer.request->isDone()) {
            _ZN18OnlineResultRecordaSERKS_(&work->header, work->transfer.request->getHeader());
            if (_ZNK18OnlineResultRecord7isValidEv(&work->header)) {
                work->advance(7, work->transfer.link->value);
            } else {
                s32 error = *work->transfer.request->getResult();
                void *object = work->transfer.request->getResultObject();
                if (object == NULL) {
                    if (!nnResultIsSuccess(error)) {
                        object = FUN_00442218(&error);
                    } else {
                        object = FUN_00111800(&work->header);
                    }
                }
                work->finish(object);
            }
            return 1;
        }
        return 0;
    }
    work->finish(NULL);
    return 1;
}

} /* extern "C" */
