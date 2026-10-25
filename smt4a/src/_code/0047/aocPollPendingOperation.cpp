/* NON_MATCHING: canonical native result constructors and failure predicates recovered; output aggregate still uses a local copy without an explicit status constructor. */
#include "shard/W6_W6Match8_AocPoll.h"
#include "classes/ResourceLookup.h"
#include "nn/Result.h"

extern "C" {
extern AocMain *g_aocMain;
s32 FUN_0047d904(void *request, nn::Result *code, u32 *detail);
WindowStatusResult FUN_00473acc(ResourceLookup *lookup);
u32 legacyResourceIdRemap(const WindowStatusResult *result);
void FUN_001764dc(AocMain *main);
s32 FUN_00473da0(AocMain *main);
s32 block88OwnerCheck(AocMain *main);

// Poll an addon request and translate failures into the operation's result/status output.
WindowStatusOperationResult aocPollPendingOperation(AocPollStep *step)
{
    WindowStatusOperationResult output = {1};
    output.result = WindowStatusResult(0);
    AocMain *main = g_aocMain;
    if (step->phase == 0) {
        nn::Result queryCode;
        u32 queryDetail;
        if (FUN_0047d904(step->request, &queryCode, &queryDetail)) {
            if (nnResultIsFailure(queryResultFailureOnly(&main->operation.queryResult))) {
                WindowStatusResult failure = FUN_00473acc(reinterpret_cast<ResourceLookup *>(main));
                step->result = failure;
                if (nnResultIsFailure(legacyResourceIdRemap(&step->result))) {
                    output.result = step->result;
                    output.status = 100;
                    return output;
                }
            }
            step->phase = 1;
            return output;
        }
        if (nnResultIsFailure(queryCode)) {
            output.result = WindowStatusResult(queryCode);
            if (queryDetail == 0) {
                output.status = 102;
            } else {
                FUN_001764dc(main);
                output.status = 103;
            }
        }
    } else if (step->phase == 1) {
        if (FUN_00473da0(main)) {
            step->phase = 2;
        } else {
            step->phase = 3;
            output.status = 0;
        }
    } else if (step->phase == 2 && block88OwnerCheck(main)) {
        step->phase = 3;
        output.status = 0;
    }
    return output;
}
}
