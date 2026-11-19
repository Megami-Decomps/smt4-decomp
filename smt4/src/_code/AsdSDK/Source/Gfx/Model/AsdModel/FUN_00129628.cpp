/* NON_MATCHING: 20 lines; the header store and the pair copy (armcc's __ARM_common_memcpy4_8) match. Retail saves
 * reply, value low and value high in r5-r7 in parameter order and stores the 64-bit value with strd from r6/r7;
 * armcc here saves the value in r5/r6 (stm), and builds the copy's destination straight in r0. */
#include "nn/Result.h"
#include <string.h>
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

extern "C" {
extern u32 DAT_00471ba4; /* 0x471ba4 */

/* Two parameter words copied as one unaligned record (armcc's __ARM_common_memcpy4_8). */
__packed struct IpcWordPair {
    u32 first;
    u32 second;
};

/* Sends command 0x50100 carrying a pair of words and a 64-bit value; on success stores the third reply word. */
s32 FUN_00129628(u32 *reply, const IpcWordPair *pair, u64 value)
{
    nn::os::IpcCommandBuffer *command = nn::os::GetIpcCommandBuffer();
    command->header = 0x50100;
    *reinterpret_cast<IpcWordPair *>(&command->words[0]) = *pair;
    memcpy(&command->words[2], &value, sizeof value);
    s32 result = nn::svc::SendSyncRequest(DAT_00471ba4);
    if (nnResultIsSuccess(result)) {
        *reply = command->words[2];
        result = command->words[0];
    }
    return result;
}

} /* extern "C" */
