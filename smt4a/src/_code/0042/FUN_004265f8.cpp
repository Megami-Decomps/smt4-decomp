#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {
extern u32 DAT_005b4438;
/* Sends service command 7. */
s32 FUN_004265f8() {nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();nn::os::SetIpcWord(command, 0, 458754);nn::os::SetIpcWord(command, 1, 32);s32 result=nn::svc::SendSyncRequest(DAT_005b4438);if (nnResultIsSuccess(result)){result=command->words[0];}return result;}
}
