/* NON_MATCHING: retail constructor has an alignment NOP before its payload accessor call. */
#include "common.h"

struct BoundObject {
    const void* vtable;     // 0x00
    u8 unk04[0x1c];         // 0x04
    s16 bindingId;          // 0x20
};

struct BindingOwner {
    u8 unk00[0x0c];         // 0x00
    void* bindings;         // 0x0c
};

struct BindingLookup {
    u8 unk00[0x0c];         // 0x00
    BindingOwner* owner;    // 0x0c
};

extern "C" {
extern const u32 _ZTV9Obj55a178[];
BoundObject* FUN_003054a4(BoundObject* object, s32 mode);
void* FUN_0012411a(BoundObject* object);
void* FUN_002eb56c();
BindingLookup* FUN_002ecedc(s32 kind, void* context);
void FUN_002f3b58(void* bindings, s32 id, void* payload);

// Construct a bound object and register its payload when an ID is supplied.
BoundObject* FUN_00311780(BoundObject* object, s32 bindingId)
{
    object = FUN_003054a4(object, 1);
    object->vtable = _ZTV9Obj55a178 + 2;
    if (bindingId != 0) {
        object->bindingId = bindingId;
        void* payload = FUN_0012411a(object);
        BindingLookup* lookup = FUN_002ecedc(12, FUN_002eb56c());
        BindingOwner* owner = lookup ? lookup->owner : NULL;
        FUN_002f3b58(owner->bindings, bindingId, payload);
    }
    return object;
}
}
