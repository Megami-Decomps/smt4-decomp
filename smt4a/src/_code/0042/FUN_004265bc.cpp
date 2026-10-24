#include "nn/Result.h"
#include "nn/svc.h"
extern "C" {
extern u32 DAT_005b4438;
/* Sends service command 10. */
s32 FUN_004265bc(u32 *output) {nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();command->header=655360;s32 result=nn::svc::SendSyncRequest(DAT_005b4438);if (nnResultIsSuccess(result)){*output=command->words[1];result=command->words[0];}return result;}
}
