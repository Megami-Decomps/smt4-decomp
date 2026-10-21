/* NON_MATCHING: retail emits 'mov r7, r0'; compiler emits 'mov r5, r0' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Time { u64 value; };
struct Address { u8 data[36]; };
struct ReferenceAddress { void *reference; Address address; };
void onlineTimeGetNow(Time *time);
Address *onlineSockAddrConstruct(Address *address);
void sharedRefAddRef(void *reference);
void onlineSockAddrCopy(Address *output, const Address *source);
void FUN_00128e56(void *object, const ReferenceAddress *address, const Time *time);
void FUN_002f8264(ReferenceAddress *address);
void FUN_002f2faa(void *object, void *reference, const Address *address) {
    Time now;
    ReferenceAddress copy;
    onlineTimeGetNow(&now);
    Address *constructed = onlineSockAddrConstruct(&copy.address);
    ReferenceAddress *temporary = (ReferenceAddress *)((u8 *)constructed - 4);
    temporary->reference = reference;
    sharedRefAddRef(reference);
    onlineSockAddrCopy(&temporary->address, address);
    FUN_00128e56((u8 *)object + 8, &copy, &now);
    FUN_002f8264(temporary);
}
}
