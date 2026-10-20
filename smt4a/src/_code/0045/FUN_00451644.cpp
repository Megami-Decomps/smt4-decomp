/* Dispatches the message's payload to the handler registered for its type (0x80000000 or 0x40000000). */
#include "common.h"

extern "C" {

typedef struct Message {
    /* 0x00 */ u32 type;
    /* 0x04 */ u32 payload;
} Message;

typedef void (*MessageHandler)(Message *message, u32 payload);

extern MessageHandler DAT_0059daf4[2];

void FUN_00451644(Message **messagePtr)
{
    Message *message = *messagePtr;

    if (message->payload != 0) {
        switch (message->type) {
        case 0x80000000:
            DAT_0059daf4[0](message, message->payload);
            break;
        case 0x40000000:
            DAT_0059daf4[1](message, message->payload);
            break;
        }
    }
}

}
