/* 3DS IPC: a request is built in the command buffer at thread-local storage + 0x80 and sent with
 * svcSendSyncRequest. Neither the thread-pointer read (mrc p15, 0, rd, c13, c0, 3) nor the svc can be
 * written without inline asm, so they are declared as functions standing for the instructions. */
#ifndef SHARD_S1IPC_H
#define SHARD_S1IPC_H

#include "common.h"

/* The IPC command buffer: word 0 is the command header, the rest parameters and descriptors. */
typedef struct IpcCommandBuffer {
    /* 0x00 */ u32 header;
    /* 0x04 */ u32 words[63];
} IpcCommandBuffer;

extern "C" {
IpcCommandBuffer *nn_getIpcCommandBuffer(void); /* mrc p15, 0, r4, c13, c0, 3 ; add #0x80 */
s32 nn_svc_SendSyncRequest(u32 handle);         /* svc 0x32 */
}

#endif
