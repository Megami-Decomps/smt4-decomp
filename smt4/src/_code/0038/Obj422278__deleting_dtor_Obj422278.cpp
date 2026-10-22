/* NON_MATCHING: retail's native deleting destructor derives the owner from handleOwnerClose's result; the explicit wrapper retains the owner instead. */
#include "common.h"

struct HandleOwnerObject {
    void *vtable; // 0x00
    u8 unk04[0x14];
    u32 handle; // 0x18
};
extern "C" {
extern u8 _ZTV9Obj422278[];
void handleOwnerClose(u32 *handle);
void asdMemFreeNonNull(void *allocation);
}

// Close the embedded handle before releasing this object.
extern "C" void _ZN9Obj422278D0Ev(HandleOwnerObject *object)
{
    object->vtable = _ZTV9Obj422278 + 8;
    handleOwnerClose(&object->handle);
    asdMemFreeNonNull(object);
}
