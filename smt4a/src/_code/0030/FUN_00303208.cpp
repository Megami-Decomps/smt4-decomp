/* NON_MATCHING: retail emits 'mov r5, r1'; compiler emits 'mov r4, r1' at the first differing instruction. */
#include "common.h"
extern "C" {
extern const u8 DAT_0055abdc;
struct Object {
    const void *vtable;
    u8 pad[4];
    u16 kind;
};
Object *FUN_003054a4(void *,u32);
u32 FUN_0012426e();
struct Context {
    u8 pad[12];
    void *work;
};
Context *FUN_002ecf28();
void FUN_002f3b58(void *,s32,u32);
Object *FUN_00303208(void *storage,s32 kind) {
    Object *object=FUN_003054a4(storage,1);
    object->vtable=&DAT_0055abdc;
    if(kind) {
        object->kind=kind;
        u32 mode=FUN_0012426e();
        FUN_002f3b58(FUN_002ecf28()->work,kind,mode);
    }
    return object;
}
}
