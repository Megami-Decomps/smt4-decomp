/* NON_MATCHING: the template copy: retail copies it with integer ldm/stm/ldrd, armcc builds it as VFP vldm/vstm; register numbering follows. */
#include "common.h"
#include "nn/Result.h"
#include "shard/S3CmdMsg.h"

extern "C" {

CmdManager *FUN_002ad244(void);
s32 FUN_002a4a10(CmdQueue *queue, CmdMsg *msg);

extern CmdTemplate DAT_00472a88;

/* Queues a type 5 message (when `withBegin` is set) and then a type 1 message, both built from
 * the template; the second is skipped if the first fails. */
void FUN_0014794c(u32 arg0, u32 arg1, s32 withBegin, u32 arg2)
{
    s32 result = 0;

    if (withBegin != 0) {
        CmdMsg msg = *DAT_00472a88.msg;

        msg.type = 5;
        msg.flag = 0;
        msg.arg0 = arg0;
        msg.arg1 = arg1;
        result = FUN_002a4a10(&FUN_002ad244()->queue, &msg);
    }
    if (nnResultIsSuccess(result)) {
        CmdMsg msg = *DAT_00472a88.msg;

        msg.type = 1;
        msg.flag = DAT_00472a88.flag;
        msg.arg0 = arg0;
        msg.arg1 = arg1;
        msg.arg2 = arg2;
        msg.unk10[3] = 0;
        FUN_002a4a10(&FUN_002ad244()->queue, &msg);
    }
}

} /* extern "C" */
