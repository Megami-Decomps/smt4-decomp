/* A 32-byte command message queued on the manager returned by FUN_002ad244. DAT_00472a8c points
 * at a template message every sender starts from. */
#ifndef SHARD_S3CMDMSG_H
#define SHARD_S3CMDMSG_H

#include "common.h"

typedef struct CmdMsg {
    /* 0x00 */ u8 type;
    /* 0x01 */ u8 unk01[2];
    /* 0x03 */ u8 flag;
    /* 0x04 */ u32 arg0;
    /* 0x08 */ u32 arg1;
    /* 0x0C */ u32 arg2;
    /* 0x10 */ u32 unk10[4];
} CmdMsg;

/* Global state of the command senders: a byte every second message carries, and the template. */
typedef struct CmdTemplate {
    /* 0x00 */ u8 flag;
    /* 0x04 */ CmdMsg *msg;
} CmdTemplate;

typedef struct CmdQueue {
    u8 unk00[4];
} CmdQueue;

typedef struct CmdManager {
    /* 0x00 */ u8 unk00[0x58];
    /* 0x58 */ CmdQueue queue;
} CmdManager;

#endif
