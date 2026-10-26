/* NON_MATCHING: retail keeps one indirect call per message type (`ldr r1, [r0, #off]; blx r1; b end` in each arm); the build if-converts the arms into a conditional handler load and a single call (the zero result in r4 now matches). */
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

extern MessageHandlers s__E_E_E_E_E_E_E_E_E_E_0059dab4;

// Dispatches the message in the request to the handler registered for its type.
u32 FUN_0015d8e0(HandlerMessage **request)
{
    u32 result = 0;
    HandlerMessage *message = *request;
    switch (message->type) {
    case 0x20000002:
        s__E_E_E_E_E_E_E_E_E_E_0059dab4.onType02(message);
        break;
    case 0x20000004:
        s__E_E_E_E_E_E_E_E_E_E_0059dab4.onType04(message);
        break;
    case 0x20000009:
        s__E_E_E_E_E_E_E_E_E_E_0059dab4.onType09(message);
        break;
    case 0x20000011:
        s__E_E_E_E_E_E_E_E_E_E_0059dab4.onType11(message);
        break;
    case 0x20000021:
        s__E_E_E_E_E_E_E_E_E_E_0059dab4.onType21(message);
        break;
    }
    return result;
}

}
