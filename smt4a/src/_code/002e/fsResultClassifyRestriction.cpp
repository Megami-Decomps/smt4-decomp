#include "common.h"
#include "nn/FsResult.h"
#include "shard/W6_W6Match3_EmitterRecord.h"

extern "C" {
u32 FUN_00280bc0(void);

/* Classifies the current filesystem result and optionally displays its restriction message. */
u32 fsResultClassifyRestriction(u32 context, s32 message)
{
    u32 status = 2;
    nn::Result result = FUN_00280bc0();
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
