#include "shard/Shard0043.h"

extern "C" {

typedef struct CecMessage {
    /* 0x000 */ u8 unk000[0x134];
    /* 0x134 */ u32 body;
    /* 0x138 */ u32 bodySize;
} CecMessage;

/* Returns the body size and stores the body pointer (and, if asked for, the size again). */
u32 asdCecMessageGetBody(CecMessage *message, u32 *size, u32 *body)
{
    *body = message->body;
    if (size != NULL) {
        *size = message->bodySize;
    }
    return message->bodySize;
}

} /* extern "C" */
