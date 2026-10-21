/* NON_MATCHING: retail emits 'push {r1, r2, r3, r4, r5, lr}'; compiler emits 'push {r0, r1, r4, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Node {
    u32 value,option;
};
struct Object {
    u32 reserved;
    Node *head;
    u8 pad[8];
    Node *current;
};
void FUN_003101ae(u32 *,Object *,const u32 *,const u32 *);
void FUN_001326f6(Object *);
Object *FUN_00303350(Object *object,u32 value) {
    if(object->current) {
        u32 option=object->current->value,result;
        FUN_003101ae(&result,object,&value,&option);
        object->current->value=(u32)object->head;
        object->head=object->current;
        FUN_001326f6(object);
    }
    return object;
}
}
