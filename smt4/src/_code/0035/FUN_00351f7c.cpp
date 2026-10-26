#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {
extern u32 DAT_004655f8;
/* Sends service command 7. */
s32 FUN_00351f7c() {nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();nn::os::SetIpcWord(command, 0, 458754);nn::os::SetIpcWord(command, 1, 32);s32 result=nn::svc::SendSyncRequest(DAT_004655f8);if (nnResultIsSuccess(result)){result=command->words[0];}return result;}
}
