#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {
extern u32 DAT_004655f8;
/* Sends service command 10. */
s32 FUN_00351f40(u32 *output) {nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();nn::os::SetIpcWord(command, 0, 655360);s32 result=nn::svc::SendSyncRequest(DAT_004655f8);if (nnResultIsSuccess(result)){*output=command->words[1];result=command->words[0];}return result;}
}
