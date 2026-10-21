#include "common.h"

class CallbackOwner;
typedef void (CallbackOwner::*MemberCallback)();

struct CallbackSource;
struct CallbackSourceVtable {
    u8 unk00[0x48];
    s32 (*getKind)(CallbackSource* source); // 0x48
};
struct CallbackSource {
    CallbackSourceVtable* vtable;
};
struct CallbackBinding {
    u32 state; // 0x00
    MemberCallback callback; // 0x04
};

extern "C" {
extern MemberCallback DAT_0053cbfc[3];

// Initializes a member-callback binding from the source's virtual kind.
void callbackBindingInitFromKind(CallbackBinding* binding, CallbackSource* source)
{
    MemberCallback callback = NULL;
    switch (source->vtable->getKind(source)) {
    case 1:
        callback = DAT_0053cbfc[0];
        break;
    case 2:
        callback = DAT_0053cbfc[1];
        break;
    case 3:
        callback = DAT_0053cbfc[2];
        break;
    }
    binding->state = 0;
    binding->callback = callback;
}
}
