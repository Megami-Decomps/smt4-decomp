#include "common.h"

struct CallbackOwner {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 active;
    /* 0x05 */ u8 unk05[3];
    /* 0x08 */ u32 first;
    /* 0x0c */ u32 second;
};
extern "C" {
extern const u8 DAT_0055c7f4[];
/* Clears the callback owner's state and installs its dispatch table. */
void callbackOwnerInitialize(CallbackOwner *owner)
{
    owner->active = 0;
    owner->first = 0;
    owner->second = 0;
    owner->vtable = DAT_0055c7f4;
}
}
