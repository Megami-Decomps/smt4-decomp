/* NON_MATCHING: uses callable svcCloseHandle rather than retail's inlined SVC; vtable load scheduling differs. */
#include "common.h"
struct HandleArrayOwner {
    /* 0x00 */ const void *vtable;
    /* 0x04 */ u8 unk04[0x68];
    /* 0x6C */ u32 handle;
};
extern "C" {
extern const u32 DAT_0055ac8c[];
s32 svcCloseHandle(u32 handle);
void FUN_002ea11c(HandleArrayOwner *object);
void FUN_004d9ab0(HandleArrayOwner *object)
{
    object->vtable = DAT_0055ac8c;
    if (object->handle) {
        svcCloseHandle(object->handle);
        object->handle = 0;
    }
    FUN_002ea11c(object);
}
}
