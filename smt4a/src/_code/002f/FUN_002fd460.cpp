/* NON_MATCHING: retail emits 'bne.n 2c'; compiler emits 'beq.n 30' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Object {
    u8 pad[0x88];
    void *member;
    u8 gap[0xEC];
    u32 id;
    u8 gap2[0x35];
    u8 active;
};
void *onlineInstanceTableGetCurrent();
s32 onlineInstanceTableFind(void *,u32);
struct Context {
    u8 pad[0x30];
    u8 active;
};
Context *onlineInstantiationContextGetCurrent();
void FUN_00123e86(void *);
s32 FUN_002fd460(Object *object) {
    if(!onlineInstanceTableFind(onlineInstanceTableGetCurrent(),object->id))return 1;
    if(!onlineInstantiationContextGetCurrent()->active || !object->active) {
        FUN_00123e86(object->member);
        return 0;
    }
    return 1;
}
}
