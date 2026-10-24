/* NON_MATCHING: retail emits 'push {r1, r2, r3, lr}'; compiler emits 'push {lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Guard {
    u8 data[16];
};
extern u8 DAT_0062e6a0;
void FUN_002ecef0();
void _ZN9Obj55b28cC1EPv(Guard *,void *);
void _ZN9Obj55b28cD1Ev(Guard *);
void *FUN_002ecf28();
void sharedRefAddRef(void *);
void *_Znwj(u32);
void FUN_00106150(void *);
void FUN_002f3d88() {
    FUN_002ecef0();
    Guard guard;
    _ZN9Obj55b28cC1EPv(&guard,&DAT_0062e6a0);
    if(FUN_002ecf28()) sharedRefAddRef(FUN_002ecf28());
    else {
        void *object=_Znwj(96);
        if(object) FUN_00106150(object);
    }
    _ZN9Obj55b28cD1Ev(&guard);
}
}
