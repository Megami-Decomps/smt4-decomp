/* NON_MATCHING: the thread-pointer read and svc 0x32 now match through nn/svc.h; armcc pairs/orders the command-buffer stores (stm/strd, descriptor order) differently from retail. */
#include "nn/svc.h"

extern "C" {
extern u32 DAT_005b4438;

u32 FUN_004266e4(u32 inputAddress, u32 outputAddress, u8 firstFlag, u8 secondFlag)
{
    nn::os::IpcCommandBuffer* command = nn::os::GetIpcCommandBuffer();
    command->header = 0x002d0082;
    *reinterpret_cast<u8*>(&command->words[0]) = firstFlag;
    *reinterpret_cast<u8*>(&command->words[1]) = secondFlag;
    command->words[3] = inputAddress;
    command->words[2] = 0x00800002;

    u64* receiveBuffer = reinterpret_cast<u64*>(nn::os::GetIpcCommandBuffer() + 1);
    u64 savedReceiveBuffer = *receiveBuffer;
    *receiveBuffer = (static_cast<u64>(outputAddress) << 32) | 0x00800002;
    s32 result = nn::svc::SendSyncRequest(DAT_005b4438);
    *receiveBuffer = savedReceiveBuffer;
    return result >= 0 ? command->words[0] : static_cast<u32>(result);
}
}
