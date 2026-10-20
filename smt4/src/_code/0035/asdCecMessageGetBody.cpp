#include "common.h"

extern "C" {

typedef struct Message {
    /* 0x000 */ u8 unk000[0x134];
    /* 0x134 */ u32 body;
    /* 0x138 */ u32 bodySize;
} Message;

/* Returns the body pointer in *body and, when requested, its size in *size (also the return value). */
u32 asdCecMessageGetBody(Message *message, u32 *size, u32 *body)
{
    *body = message->body;
    if (size != NULL) {
        *size = message->bodySize;
    }
    return message->bodySize;
}

} /* extern "C" */
