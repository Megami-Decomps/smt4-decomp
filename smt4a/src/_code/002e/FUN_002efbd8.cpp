/* NON_MATCHING: retail emits 'push {r1, r2, r3, r4, r5, lr}'; compiler emits 'push {r4, r5, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Guard { u8 storage[16]; };
struct Child { u8 unk00[0x14]; u8 member; };
struct Object { u32 reserved; Child *child; u8 unk08[0xA0]; void *reference; };
void *onlineGetActiveLock(void);
void FUN_002e6e34(Guard *guard, void *lock);
void _ZN9Obj55b28cD1Ev(Guard *guard);
void FUN_002efe80(void *member);
void sharedRefRelease(void *reference);
void FUN_002efbd8(Object *object) {
    Guard guard;
    FUN_002e6e34(&guard, onlineGetActiveLock());
    if (object->reference) {
        FUN_002efe80(&object->child->member);
        sharedRefRelease(object->reference);
        object->reference = NULL;
    }
    _ZN9Obj55b28cD1Ev(&guard);
}
}
