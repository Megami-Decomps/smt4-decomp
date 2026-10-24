#include "nn/Result.h"
#include "nn/svc.h"
extern "C" {
extern u32 g_ipcServiceSessionHandle;
/* Sends service command 7 and returns its result. */
s32 FUN_00432008(u32 value) { nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();command->header=0x70040;command->words[0]=value;s32 result=nn::svc::SendSyncRequest(g_ipcServiceSessionHandle);if (nnResultIsSuccess(result)) {
        result = command->words[0];
    }
    return result; }
}
