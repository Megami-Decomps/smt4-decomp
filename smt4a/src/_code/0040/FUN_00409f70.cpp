#include "common.h"

struct ValueOwner {
    void (**vtable)(ValueOwner *); // 0x00
};
struct Obj420794Value {
    u8 unk00[0x14];
    ValueOwner *owner; // 0x14
};

// Forward to the owning object's virtual hook in slot 4.
extern "C" void FUN_00409f70(const Obj420794Value *object)
{
    object->owner->vtable[4](object->owner);
}
