/* NON_MATCHING: the flag spill matches (memcpy of the byte parameters); retail copies the saved receive buffer through core registers (ldrd/strd r6:r7) where armcc uses VFP d8 (the library appears to be built without VFP block copies, --fpu=none reproduces it) */
#include "nn/Result.h"
#include "nn/svc.h"
#include <string.h>

extern "C" {
extern u32 DAT_004655f8;

u32 FUN_00352008(u32 inputAddress, u32 outputAddress, u8 firstFlag, u8 secondFlag)
{
    nn::os::IpcCommandBuffer* command = nn::os::GetIpcCommandBuffer();
    command->header = 0x002d0082;
    memcpy(&command->words[0], &firstFlag, sizeof(firstFlag));
    memcpy(&command->words[1], &secondFlag, sizeof(secondFlag));
    command->words[3] = inputAddress;
    command->words[2] = 0x00800002;

    u64* receiveBuffer = reinterpret_cast<u64*>(nn::os::GetIpcCommandBuffer() + 1);
    u64 savedReceiveBuffer = *receiveBuffer;
    *receiveBuffer = (static_cast<u64>(outputAddress) << 32) | 0x00800002;
    s32 result = nn::svc::SendSyncRequest(DAT_004655f8);
    *receiveBuffer = savedReceiveBuffer;
    return nnResultIsSuccess(result) ? command->words[0] : static_cast<u32>(result);
}
}
