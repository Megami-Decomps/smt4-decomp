/* NON_MATCHING: only retail's `mov r3, #0` (the message call's first argument hoisted to the entry) differs; every other row is the same code shifted by it. */
#include "common.h"
#include "nn/FsResult.h"
#include "shard/W6_W6Match3_EmitterRecord.h"

extern "C" {
nn::Result FUN_001db8fc(void);

/* Classifies the current filesystem result and optionally displays its restriction message. */
u32 fsResultClassifyRestriction(u32 context, s32 message)
{
    u32 status = 2;
    nn::Result result = FUN_001db8fc();
    if (nnResultIsSuccess(result)) {
        return 0;
    }
    if (fsResultInRange100(result)) {
        status = 3;
    } else if (fsResultInRange180(result)) {
        /* These results keep the default classification. */
    } else if (fsResultInRange390(result)) {
        if (message != 0) {
            archivePathRequestSucceeded(0, message);
        }
        status = 1;
    } else if (fsResultInRange230(result)) {
        /* These results keep the default classification. */
    } else if (fsResultInRange200(result)) {
        if (message != 0) {
            archivePathRequestSucceeded(0, message);
        }
        status = 1;
    }
    return status;
}
}
