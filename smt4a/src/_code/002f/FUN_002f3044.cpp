/* NON_MATCHING: retail emits 'push {r1, r2, r3, r4, r5, lr}'; compiler emits 'push {r4, r5, r6, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Guard {
    u8 data[16];
};
struct Object {
    u32 reserved;
    u8 mutex[0x30];
    void *slots[8];
};
void FUN_002e6e34(Guard *,void *);
void _ZN9Obj55b28cD1Ev(Guard *);
void *operatorNew(u32);
void *FUN_00301490(void *);
void *FUN_002f3044(Object *object) {
    Guard guard;
    FUN_002e6e34(&guard,object->mutex);
    u32 slot=0;
    while(slot<8 && object->slots[slot])++slot;
    void *result=operatorNew(64);
    if(result)result=FUN_00301490(result);
    object->slots[slot]=result;
    _ZN9Obj55b28cD1Ev(&guard);
    return result;
}
}
