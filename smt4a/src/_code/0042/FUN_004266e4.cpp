/* NON_MATCHING: retail inlines TLS MRC and SendSyncRequest SVC, whose required intrinsics are forbidden by matching rules. */
#include "shard/S1Ipc.h"

extern "C" {
extern u32 DAT_005b4438;

u32 FUN_004266e4(u32 inputAddress, u32 outputAddress, u8 firstFlag, u8 secondFlag)
{
    IpcCommandBuffer* command = nn_getIpcCommandBuffer();
    command->header = 0x002d0082;
    *reinterpret_cast<u8*>(&command->words[0]) = firstFlag;
    *reinterpret_cast<u8*>(&command->words[1]) = secondFlag;
    command->words[3] = inputAddress;
    command->words[2] = 0x00800002;

    u64* receiveBuffer = reinterpret_cast<u64*>(nn_getIpcCommandBuffer() + 1);
    u64 savedReceiveBuffer = *receiveBuffer;
    *receiveBuffer = (static_cast<u64>(outputAddress) << 32) | 0x00800002;
    s32 result = nn_svc_SendSyncRequest(DAT_005b4438);
    *receiveBuffer = savedReceiveBuffer;
    return result >= 0 ? command->words[0] : static_cast<u32>(result);
}
}
