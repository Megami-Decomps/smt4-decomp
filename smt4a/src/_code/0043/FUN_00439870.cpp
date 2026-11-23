/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"
extern "C" {extern u32 g_nimAocSession;void __aeabi_memcpy(void*,const void*,u32);
/* Queries the service's 64-byte response block. */
s32 FUN_00439870(void *output){nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();nn::os::SetIpcWord(command, 0, 0x180000);s32 result=nn::svc::SendSyncRequest(g_nimAocSession);if (nnResultIsSuccess(result)){__aeabi_memcpy(output,&command->words[1],64);result=command->words[0];}return result;}}
