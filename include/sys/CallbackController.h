#ifndef SYS_CALLBACK_CONTROLLER_H
#define SYS_CALLBACK_CONTROLLER_H
#include "common.h"

struct CallbackControllerOwner;
struct CallbackController {
    const void* vtable; // 0x00
    u8 flags; // 0x04
    u8 unk05[3]; // 0x05
    s32 kind; // 0x08
    CallbackControllerOwner* owner; // 0x0C
};
struct CallbackControllerOwner {
    u8 unk00[0x74]; // 0x00
    CallbackController* controller; // 0x74
};
extern "C" {
CallbackController* callbackOwnerInitialize(CallbackController*);
CallbackController* _ZN9Obj55c804C1Ev(CallbackController*);
CallbackController* _ZN9Obj55c7d4C1Ev(CallbackController*);
void FUN_004816b4(CallbackController*, CallbackControllerOwner*);
}
typedef char CallbackControllerSizeCheck[sizeof(CallbackController) == 0x10 ? 1 : -1];
typedef char CallbackControllerOwnerSizeCheck[sizeof(CallbackControllerOwner) == 0x78 ? 1 : -1];
#endif
