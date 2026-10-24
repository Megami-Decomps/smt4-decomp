/* NON_MATCHING: retail keeps one indirect call per message type (branch tree, `ldr r1, [r0, #off]; blx r1` in each arm and the zero result in r4); the build merges the arms into a conditional load of the handler and a single call. */
#include "common.h"

/* A message handed to the handler table: the first word is its type. */
struct HandlerMessage {
    /* 0x00 */ s32 type;
};

typedef void (*MessageHandler)(HandlerMessage *message);

extern "C" {

/* The registered handlers, one per message type. */
struct MessageHandlers {
    /* 0x00 */ MessageHandler onType11;
    /* 0x04 */ MessageHandler onType09;
    /* 0x08 */ MessageHandler onType04;
    /* 0x0c */ MessageHandler onType02;
    /* 0x10 */ MessageHandler onType21;
};

extern MessageHandlers DAT_0044e8b0;

// Dispatches the message in the request to the handler registered for its type.
u32 FUN_002bd498(HandlerMessage **request)
{
    HandlerMessage *message = *request;
    switch (message->type) {
    case 0x20000002:
        DAT_0044e8b0.onType02(message);
        break;
    case 0x20000004:
        DAT_0044e8b0.onType04(message);
        break;
    case 0x20000009:
        DAT_0044e8b0.onType09(message);
        break;
    case 0x20000011:
        DAT_0044e8b0.onType11(message);
        break;
    case 0x20000021:
        DAT_0044e8b0.onType21(message);
        break;
    }
    return 0;
}

}
