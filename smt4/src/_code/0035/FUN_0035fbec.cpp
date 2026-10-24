/* NON_MATCHING: the mrc and svc 0x32 now match through nn/svc.h; retail spills r0-r3 with one push {r0-r3, r4-fp, ip, lr} and reads every argument back from the stack (no VFP register copies), which armcc does not do for this by-value argument block. */
#include "nn/Result.h"
#include "nn/svc.h"

/* The arguments of the request, passed by value (twenty words). */
struct Request9 {
    u32 arg0;
    u32 arg1;
    void *staticB;
    u32 countB;
    void *staticA;
    u32 countA;
    const void *readA;
    u32 readCountA;
    const void *readB;
    u32 readCountB;
    void *staticC;
    u32 countC;
    const void *readC;
    u32 readCountC;
    void *writeA;
    u32 writeSizeA;
    u32 *out;
    u32 arg2;
    void *writeB;
    u32 writeSizeB;
};

extern "C" {

extern u32 DAT_004719e8; /* service session handle */

/* IPC request 0x0009 with eleven parameters and ten buffers: three static buffers (64, 64 and 8
 * byte records), three read-only mapped buffers (320, 320 and 192 byte records) and two writable
 * mapped buffers; passes one response word back in *out and returns the transport result, or the
 * service's result word when the transport succeeded. */
s32 FUN_0035fbec(Request9 request)
{
    nn::os::IpcCommandBuffer *cmd = nn::os::GetIpcCommandBuffer();

    cmd->header = 0x000902D0;
    cmd->words[0] = request.arg0;
    cmd->words[1] = request.arg1;
    cmd->words[2] = request.countB;
    cmd->words[3] = request.countA;
    cmd->words[4] = request.readCountA;
    cmd->words[5] = request.readCountB;
    cmd->words[6] = request.countC;
    cmd->words[7] = request.readCountC;
    cmd->words[8] = request.writeSizeA;
    cmd->words[9] = request.arg2;
    cmd->words[10] = request.writeSizeB;
    cmd->words[11] = (request.countB << 20) | 0x402;
    cmd->words[12] = (u32)request.staticB;
    cmd->words[13] = (request.countA << 20) | 2;
    cmd->words[14] = (u32)request.staticA;
    cmd->words[15] = (request.countC << 17) | 0x802;
    cmd->words[16] = (u32)request.staticC;
    cmd->words[17] = (request.readCountA * 0x1400) | 10;
    cmd->words[18] = (u32)request.readA;
    cmd->words[19] = (request.readCountB * 0x1400) | 10;
    cmd->words[20] = (u32)request.readB;
    cmd->words[21] = (request.readCountC * 0xc00) | 10;
    cmd->words[22] = (u32)request.readC;
    cmd->words[23] = (request.writeSizeA << 4) | 0xc;
    cmd->words[24] = (u32)request.writeA;
    cmd->words[25] = (request.writeSizeB << 4) | 0xc;
    cmd->words[26] = (u32)request.writeB;
    s32 result = nn::svc::SendSyncRequest(DAT_004719e8);
    if (nnResultIsSuccess(result)) {
        *request.out = cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
