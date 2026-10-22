/* NON_MATCHING: retaining the caller output and returned storage separately adds a saved register; failure tests and epilogue placement also differ. */
#include "shard/W6_W6Match8_AocPoll.h"

extern "C" {
extern AocMain *g_aocMain;
AocPollStorage *_ZN18WindowStatusResultC1Ev(AocPollStorage *storage);
AocPollResult *_ZN18WindowStatusResultC1Ej(AocPollResult *result, s32 code);
s32 FUN_00394230(void *request, s32 *code, s32 *detail);
s32 queryResultFailureOnly(const u32 *result);
void FUN_0038b25c(AocPollResult *result, AocMain *main);
s32 legacyResourceIdRemap(const AocPollResult *result);
void FUN_002b4810(AocMain *main);
s32 FUN_0038b44c(AocMain *main);
s32 FUN_0038b3e8(AocMain *main);

// Poll an addon request and translate failures into the operation's result/status output.
void aocPollPendingOperation(AocPollOutput *output, AocPollStep *step)
{
    output->status = 1;
    AocPollStorage *storage = _ZN18WindowStatusResultC1Ev(&output->storage);
    storage->unk08 = 0;
    storage->unk0c = 0;
    AocPollResult result;
    storage->result = *_ZN18WindowStatusResultC1Ej(&result, 0);
    AocMain *main = g_aocMain;
    if (step->phase == 0) {
        AocPollResult failure;
        result.code = static_cast<s32>(0xe7e3ffff);
        if (FUN_00394230(step->request, &result.code, &result.detail)) {
            if (queryResultFailureOnly(&main->operation.queryResult) < 0) {
                FUN_0038b25c(&failure, main);
                step->result = failure;
                if (legacyResourceIdRemap(&step->result) < 0) {
                    storage->result = step->result;
                    output->status = 100;
                    return;
                }
            }
            step->phase = 1;
            return;
        }
        if (result.code < 0) {
            storage->result = *_ZN18WindowStatusResultC1Ej(&failure, result.code);
            if (result.detail == 0) {
                output->status = 102;
            } else {
                FUN_002b4810(main);
                output->status = 103;
            }
        }
    } else if (step->phase == 1) {
        if (FUN_0038b44c(main)) {
            step->phase = 2;
        } else {
            step->phase = 3;
            output->status = 0;
        }
    } else if (step->phase == 2 && FUN_0038b3e8(main)) {
        step->phase = 3;
        output->status = 0;
    }
}
}
