#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {
extern u32 g_nimAocSession;
/* Queries the service's 64-bit value. */
s32 FUN_0035fd20(u64 *output){nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();nn::os::SetIpcWord(command, 0, 0x250000);s32 result=nn::svc::SendSyncRequest(g_nimAocSession);if (nnResultIsSuccess(result)){*output=(u64)command->words[1]|((u64)command->words[2]<<32);result=command->words[0];}return result;}
}
