/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/Result.h"
#include "nn/svc.h"
extern "C" {
extern u32 DAT_005b4438;
/* Requests service command 5 with selector 32. */
s32 FUN_00426530(){nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();command->header=0x50002;command->words[0]=32;s32 result=nn::svc::SendSyncRequest(DAT_005b4438);if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result;}
}
