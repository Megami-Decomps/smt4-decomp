/* NON_MATCHING: retail emits 'push {r1, r2, r3, r4, r5, lr}'; compiler emits 'push {r0, r1, r4, lr}' at the first differing instruction. */
#include "common.h"
extern "C" {
struct Node {
    u32 reserved,value,option;
    Node *child;
};
struct Object {
    u32 reserved;
    Node *head;
    u8 pad[8];
    Node *current;
};
void FUN_00301be2(u32 *,Object *,const u32 *,const u32 *);
void FUN_0012ff18(Object *);
Object *FUN_00301dc2(Object *object,u32 value) {
    if(object->current) {
        u32 option=object->current->option,result;
        FUN_00301be2(&result,object,&value,&option);
        object->current->child=object->head;
        object->head=object->current;
        FUN_0012ff18(object);
    }
    return object;
}
}
