/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/svc.h"
extern "C" {extern u32 DAT_005b4438;
/* Sends command 0x30 with its output descriptor. */
s32 FUN_00426754(void *buffer){nn::os::IpcCommandBuffer *command=nn::os::GetIpcCommandBuffer();command->header=0x300004;command->words[0]=32;command->words[2]=0;command->words[3]=(u32)buffer;s32 result=nn::svc::SendSyncRequest(DAT_005b4438);return result>=0?command->words[0]:result;}}
