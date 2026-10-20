/* A network message sent through the session object returned by FUN_001a2a4c. */
#ifndef SHARD_S1NETMESSAGE_H
#define SHARD_S1NETMESSAGE_H

#include "common.h"

typedef struct NetMessage {
    /* 0x00 */ u8 type;
    /* 0x01 */ u8 session[2];     /* session id bytes copied from the global header */
    /* 0x03 */ u8 flag;
    /* 0x04 */ u32 param1;
    /* 0x08 */ u32 param2;
    /* 0x0C */ u32 param3;
    /* 0x10 */ u32 payload[4];
} NetMessage;

/* The shared session header the messages are built from (32 bytes). */
typedef struct NetSessionHeader {
    /* 0x00 */ u32 header;        /* byte 0 is replaced by the message type */
    /* 0x04 */ u8 unk04[8];
    /* 0x0C */ u32 param3;
    /* 0x10 */ u32 payload[4];
} NetSessionHeader;

#endif
