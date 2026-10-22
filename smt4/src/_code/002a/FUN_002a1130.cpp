/* NON_MATCHING: compiler copies the two-word value with different register allocation and owner-address formation. */
#include "common.h"
namespace { struct Value { u32 low, high; }; struct Payload { Value value; u32 first, second; }; struct Owner { u8 kind; u8 padding[3]; Payload payload; }; }
extern "C" {
Payload *_ZN18WindowStatusResultC1Ev(Payload *payload);
Value *_ZN18WindowStatusResultC1Ej(Value *value);
Owner *FUN_002a1130(Owner *owner, u8 kind)
{
    owner->kind = kind;
    Payload *payload = _ZN18WindowStatusResultC1Ev(&owner->payload);
    Owner *result = (Owner *)((u8 *)payload - 4);
    payload->first = payload->second = 0;
    Value temporary;
    result->payload.value = *_ZN18WindowStatusResultC1Ej(&temporary);
    return result;
}
}
