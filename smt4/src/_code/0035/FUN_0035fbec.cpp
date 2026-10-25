/* NON_MATCHING: the mrc and svc 0x32 now match through nn/svc.h; retail spills r0-r3 with one push {r0-r3, r4-fp, ip, lr} and reads every argument back from the stack (no VFP register copies), which armcc does not do for this by-value argument block. */
#include "nn/Result.h"
#include "nn/svc.h"
#include "nn/os/IpcCommandBuffer.h"

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

    nn::os::SetIpcWord(cmd, 0, 0x000902D0);
    nn::os::SetIpcWord(cmd, 1, request.arg0);
    nn::os::SetIpcWord(cmd, 2, request.arg1);
    nn::os::SetIpcWord(cmd, 3, request.countB);
    nn::os::SetIpcWord(cmd, 4, request.countA);
    nn::os::SetIpcWord(cmd, 5, request.readCountA);
    nn::os::SetIpcWord(cmd, 6, request.readCountB);
    nn::os::SetIpcWord(cmd, 7, request.countC);
    nn::os::SetIpcWord(cmd, 8, request.readCountC);
    nn::os::SetIpcWord(cmd, 9, request.writeSizeA);
    nn::os::SetIpcWord(cmd, 10, request.arg2);
    nn::os::SetIpcWord(cmd, 11, request.writeSizeB);
    nn::os::SetIpcWord(cmd, 12, (request.countB << 20) | 0x402);
    nn::os::SetIpcWord(cmd, 13, (u32)request.staticB);
    nn::os::SetIpcWord(cmd, 14, (request.countA << 20) | 2);
    nn::os::SetIpcWord(cmd, 15, (u32)request.staticA);
    nn::os::SetIpcWord(cmd, 16, (request.countC << 17) | 0x802);
    nn::os::SetIpcWord(cmd, 17, (u32)request.staticC);
    nn::os::SetIpcWord(cmd, 18, (request.readCountA * 0x1400) | 10);
    nn::os::SetIpcWord(cmd, 19, (u32)request.readA);
    nn::os::SetIpcWord(cmd, 20, (request.readCountB * 0x1400) | 10);
    nn::os::SetIpcWord(cmd, 21, (u32)request.readB);
    nn::os::SetIpcWord(cmd, 22, (request.readCountC * 0xc00) | 10);
    nn::os::SetIpcWord(cmd, 23, (u32)request.readC);
    nn::os::SetIpcWord(cmd, 24, (request.writeSizeA << 4) | 0xc);
    nn::os::SetIpcWord(cmd, 25, (u32)request.writeA);
    nn::os::SetIpcWord(cmd, 26, (request.writeSizeB << 4) | 0xc);
    nn::os::SetIpcWord(cmd, 27, (u32)request.writeB);
    s32 result = nn::svc::SendSyncRequest(DAT_004719e8);
    if (nnResultIsSuccess(result)) {
        *request.out = cmd->words[1];
        result = cmd->words[0];
    }
    return result;
}

} /* extern "C" */
