#include "shard/W6_W6Match8_AocPoll.h"
#include "classes/ResourceLookup.h"
#include "nn/Result.h"
#include "sys/RuntimeObjects.h"

extern "C" {
s32 asyncRequestPoll(void *request, nn::Result *code, u32 *detail);
WindowStatusResult FUN_0038b25c(ResourceLookup *lookup);
s32 FUN_0038b44c(AocMain *main);
s32 block88OwnerCheck(AocMain *main);

/* Polls an add-on request and translates failures into the operation's result. */
WindowStatusOperationResult aocPollPendingOperation(AocPollStep *step)
{
    WindowStatusOperationResult output(AOC_PENDING_BUSY);
    AocMain *main = g_aocMain;
    bool finished = false;
    switch (step->phase) {
    case AOC_PENDING_POLL: {
        nn::Result queryCode;
        u32 queryDetail;
        if (asyncRequestPoll(step->request, &queryCode, &queryDetail)) {
            if (nnResultIsFailure(queryResultFailureOnly(&main->queryResult))) {
                WindowStatusResult failure = FUN_0038b25c((ResourceLookup *)main);
                step->result = failure;
                if (nnResultIsFailure(legacyResourceIdRemap(&step->result))) {
                    output.result = step->result;
                    output.status = AOC_PENDING_LOOKUP_FAILED;
                    return output;
                }
            }
            step->phase = AOC_PENDING_START_WORKER;
            return output;
        }
        if (!nnResultIsSuccess(queryCode)) {
            output.result = WindowStatusResult(queryCode);
            if (queryDetail == 0) {
                output.status = AOC_PENDING_QUERY_FAILED;
            } else {
                FUN_002b4810(main, queryDetail);
                output.status = AOC_PENDING_QUERY_FAILED_WITH_DETAIL;
            }
        }
        break;
    }
    case AOC_PENDING_START_WORKER:
        if (FUN_0038b44c(main)) {
            step->phase = AOC_PENDING_WAIT_WORKER;
        } else {
            step->phase = AOC_PENDING_DONE;
            finished = true;
        }
        break;
    case AOC_PENDING_WAIT_WORKER:
        if (block88OwnerCheck(main)) {
            step->phase = AOC_PENDING_DONE;
            finished = true;
        }
        break;
    }
    if (finished) {
        output.status = AOC_PENDING_COMPLETE;
    }
    return output;
}
} /* extern "C" */
